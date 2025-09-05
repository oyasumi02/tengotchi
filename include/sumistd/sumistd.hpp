#pragma once
#include <iostream>
#include <chrono>
#include <thread>
#include <algorithm>
#include <cctype>

namespace sumistd {
    inline void Flush() {
        std::cout << "\033[2J\033[1;1H";
    }
    inline void Wait(unsigned int s) {
        std::this_thread::sleep_for(std::chrono::seconds(s));
    }
    inline void WaitMs(unsigned int ms) {
        std::this_thread::sleep_for(std::chrono::milliseconds(ms));
    }
    inline std::string ToLower(const std::string &str) {
        std::string result = str;
        std::transform(str.begin(), str.end(), str.begin(),
            [](unsigned char c) { return std::tolower(c); });
    }
};