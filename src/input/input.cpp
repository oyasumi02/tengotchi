#include "../../include/input/input.hpp"
#include "../../include/sumistd/sumistd.hpp"
#include "../../include/state/state.hpp"

void Input::ScreenCase(std::string &input, State::ScreenType &screen_type) {
    input = sumistd::ToLower(input);
    if (input == "feed") {
        screen_type = State::ScreenType::FEED;
    } else if (input == "lights" || input == "light") {
        screen_type = State::ScreenType::LIGHTS;
    } else if (input == "play") {
        screen_type = State::ScreenType::PLAY;
    } else if (input == "discipline") {
        screen_type = State::ScreenType::DISCIPLINE;
    } else if (input == "sick") {
        screen_type = State::ScreenType::SICK;
    } else if (input == "stats") {
        screen_type = State::ScreenType::STATS;
    } else {
        sumistd::Flush();
        std::cout << input << " is not a valid option!" << std::endl;
    }
}