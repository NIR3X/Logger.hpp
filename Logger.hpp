#pragma once

#include <ctime>
#include <iostream>
#include <utility>

#define LoggerFprintln_(stream, prefix, file, line) \
	time_t t = std::time(nullptr); \
	std::tm tm = {}; \
	localtime_s(&tm, &t); \
	char timestamp[20] = {}; \
	std::strftime(timestamp, sizeof(timestamp), "%Y/%m/%d %H:%M:%S", &tm); \
	stream << timestamp << " " << file << ":" << line << ": " << prefix; \
	([] <typename... Args> (Args&&... args) { \
		const char* separator = ""; \
		((std::cout << separator << std::forward<Args>(args), separator = " "), ...); \
		std::cout << std::endl;
	})

#define LoggerFprintln(stream, ...) do { LoggerFprintln_(stream, "", __FILE__, __LINE__)(__VA_ARGS__); } while (false)
#define LoggerEprintln(...) do { LoggerFprintln_(std::cerr, "error: ", __FILE__, __LINE__)(__VA_ARGS__); } while (false)
#define LoggerPrintln(...) do { LoggerFprintln_(std::cout, "", __FILE__, __LINE__)(__VA_ARGS__); } while (false)
