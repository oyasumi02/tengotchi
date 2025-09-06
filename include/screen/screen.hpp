#pragma once
#include <string>
#include "../state/state.hpp"
#include "../pet/pet.hpp"


namespace Screen {
    void Pet(std::string &input, State::ScreenType &screen_type, Pet::Tengotchi *tengotchi);
    void Feed(std::string &input, State::ScreenType &screen_type, Pet::Tengotchi *tengotchi);
}