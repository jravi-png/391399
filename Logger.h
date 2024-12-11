#pragma once
// Logger.h
#include <string>
#include <iostream>

class Logger {
public:
    static Logger& getInstance();
    void logMessage(const std::string& message);

private:
    Logger() = default;  // Private constructor to prevent direct instantiation from outside
    ~Logger() = default; // Private destructor
    static Logger* instance;

    static std::ofstream logFile;
};

