#include "Logger.h"
#include <ctime>
#include <iostream>

Logger::Level Logger::minLevel = Logger::Level::DEBUG;

const char* Logger::levelName(Logger::Level lv) {
    switch (lv) {
        case Level::DEBUG: return "DEBUG";
        case Level::INFO: return "INFO";
        case Level::WARNING: return "WARNING";
        case Level::ERROR: return "ERROR";
    }
    return "UNKNOWN";
}

void Logger::log(Level lv, const std::string& msg, const char* file, int line) {

    if (lv < minLevel) return;
    std::time_t now = std::time(0);
    std::tm tmv{};

#if defined(_WIN32)
    localtime_s(&tmv, &now);
#else
    localtime_r(&now, &tmv);
#endif
    char timeStr[20];
    std::strftime(timeStr, sizeof(timeStr), "%Y-%m-%d %H:%M:%S", &tmv);
    std::ostream& os = (lv == Level::ERROR) ? std::cerr : std::cout;
    os << "[" << timeStr << "] [" << levelName(lv) << "] "
       << file << ":" << line << " - " << msg << std::endl;
}

