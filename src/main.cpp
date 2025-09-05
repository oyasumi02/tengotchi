// :: Standard Headers ::

// :: Project Headers ::
#include "../include/sumistd/sumistd.hpp"
#include "../include/screen/screen.hpp"
#include "../include/state/state.hpp"
#include "../include/pet/pet.hpp"

int main() {

    // Main loop flag
    bool is_running = true;

    // Instantiate Enum objects
    State::ScreenType screen_type = State::ScreenType::PET;

    // Now instantiate the classes
    Pet::Tengotchi *tengotchi = new Pet::Tengotchi(Pet::PetType::REN);

    while (is_running) {
        switch (screen_type) {
            case (State::ScreenType::PET): {
                Screen::Pet(screen_type);
                sumistd::Wait(1);
                is_running = false;
            } break;

            case (State::ScreenType::FEED): {

            } break;

            case (State::ScreenType::LIGHTS): {

            } break;

            case (State::ScreenType::PLAY): {

            } break;

            case (State::ScreenType::DISCIPLINE): {

            } break;

            case (State::ScreenType::STATS): {

            } break;
        }
    }


    return 0;
}