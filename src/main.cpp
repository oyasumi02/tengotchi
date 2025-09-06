// :: Standard Headers ::

// :: Project Headers ::
#include "../include/sumistd/sumistd.hpp"
#include "../include/screen/screen.hpp"
#include "../include/state/state.hpp"
#include "../include/pet/pet.hpp"

int main() {

    // Input
    std::string input = "";

    // Main loop flag
    bool is_running = true;

    // Instantiate Enum objects
    State::ScreenType screen_type = State::ScreenType::DEBUG;

    // Now instantiate the classes
    Pet::Tengotchi *tengotchi = new Pet::Tengotchi(Pet::PetType::REN);

    while (is_running) {
        switch (screen_type) {
            case (State::ScreenType::PET): {
                Screen::Pet(input, screen_type, tengotchi);
                sumistd::Wait(1);
                is_running = false;
            } break;

            case (State::ScreenType::FEED): {
                Screen::Feed(input, screen_type, tengotchi);
            } break;

            case (State::ScreenType::LIGHTS): {
                
            } break;

            case (State::ScreenType::PLAY): {

            } break;

            case (State::ScreenType::DISCIPLINE): {

            } break;

            case (State::ScreenType::SICK): {

            } break;

            case (State::ScreenType::STATS): {

            } break;

            case (State::ScreenType::DEBUG): {
                Screen::Pet(input, screen_type, tengotchi);
            } break;

            case (State::ScreenType::QUIT): {
                Screen::Quit(input, screen_type, is_running);
            } break;
        }
    }

    // Free Pointers
    delete tengotchi;

    // Just to be extra sure, set them to nullptr
    tengotchi = nullptr;

    return 0;
}