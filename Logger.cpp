// Logger.cpp
#include "Logger.h"

Logger* Logger::instance = nullptr;
std::ofstream Logger::logFile("application.log");

Logger& Logger::getInstance() {
    if (instance == nullptr) {
        instance = new Logger();
    }
    return *instance;
}

void Logger::logMessage(const std::string& message) {
    logFile << message << std::endl;
}