# Logger Package - A Simple Logging Utility for C++ Applications

The `Logger` header provides a straightforward logging utility for C++ applications, enabling you to log messages with timestamps, file information, and custom prefixes.

## Installation

To use this header in your C++ project, you can clone the repository using the following command:

```bash
git clone https://github.com/NIR3X/Logger.hpp
```

Then, include the header in your C++ code:

```cpp
#include "Logger.hpp/Logger.hpp"
```

## Usage

Now that you have the `Logger` header in your project, you can follow the usage examples:

## LoggerFprintln

The `LoggerFprintln` macro writes formatted log messages to the specified stream with a timestamp, file information, and additional content. Example:

```cpp
LoggerFprintln(std::cout, "This is a log message.");
```

## LoggerEprintln

The `LoggerEprintln` macro writes formatted error messages to the standard error stream with a timestamp, file information, and the "error: " prefix. Example:

```cpp
LoggerEprintln("This is an error message.");
```

## LoggerPrintln

The `LoggerPrintln` macro writes formatted log messages to the standard output with a timestamp and file information. Example:

```cpp
LoggerPrintln("This is another log message.");
```

Feel free to explore and adapt the macros to suit your logging needs.
