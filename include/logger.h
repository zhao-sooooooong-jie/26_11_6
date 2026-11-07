#pragma once
#include <sstream>
#include <string>

class Logger {
    public:
        enum class Level { DEBUG, INFO, WARNIMG, ERROR };
        static Level minLevel;
        static void log(Level lv, const std::string& msg, const char* file, int line);
        static const char* levelName(level lv);

};

#define LOG_DEBUG(...) do{ 
    std::ostringstream _os;
    _os << __VA_ARGS__;
    Logger::log(Logger::Level::DEBUG, _os.str(), __FILE__, __LINE__);
}while(0)

#define LOG_INFO(...) do{
    std::ostringstream _os;
    _os << __VA_ARGS__;
    Logger::log(Logger::level::INFO, _os.str(), __FILE__, __LINE__);
}while(0)

#define LOG_WARNING(...) do{
    std::ostringstream _os;
    _os << __VA_ARGS__;
    Logger::log(Logger::level::WARNING, _os.str(), __FILE__, __LINE__);
}while(0)

#define LOG_ERROR(...) do{
    std::ostringstream _os;
    _os << __VA_ARGS__;
    Logger::log(Logger::level::ERROR, _os.str(), __FILE__, __LINE__);
}while(0)
