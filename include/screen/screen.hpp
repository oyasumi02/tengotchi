#pragma once
#include <string>
#include "../state/state.hpp"
#include "../pet/pet.hpp"

/*
Functions left to implement:
    Lights
    Play
    Discipline
    Sick
    Stats
*/

namespace Screen {
    void Pet(std::string &input, State::ScreenType &screen_type, Pet::Tengotchi *tengotchi);
    void Feed(std::string &input, State::ScreenType &screen_type, Pet::Tengotchi *tengotchi);
    void Lights(std::string &input, State::ScreenType &screen_type);
    void Play(std::string &input, State::ScreenType &screen_type, Pet::Tengotchi *tengotchi);
    void Discipline(std::string &input, State::ScreenType &screen_Type, Pet::Tengotchi *tengotchi);
    void Sick(std::string &input, State::ScreenType &screen_type, Pet::Tengotchi *tengotchi);
    void Stats(std::string &input, State::ScreenType &screen_type, Pet::Tengotchi *tengotchi);
    void Quit(std::string &input, State::ScreenType &screen_type, bool &is_running);
}