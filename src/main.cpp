// :: Standard Headers ::

// :: Project Headers ::
#include "../include/sumistd/sumistd.hpp"
#include "../include/screen/screen.hpp"
#include "../include/state/state.hpp"
#include "../include/pet/pet.hpp"
#include "../include/pet/life_stage.hpp"

int main() {

    // Input
    std::string input = "";

    // Main loop flag
    bool is_running = true;

    // Instantiate Enum objects
    State::ScreenType screen_type = State::ScreenType::PET;
    LifeStage::Stage life_stage = LifeStage::Stage::EGG;

    // Now instantiate the classes
    Pet::Tengotchi *tengotchi = new Pet::Tengotchi(Pet::PetType::REN);

    while (is_running) {

        // :: { UPDATE SECTOR } ::
        switch (life_stage) {
            case (LifeStage::Stage::EGG): {

            } break;

            case (LifeStage::Stage::BABY): {

            } break;

            case (LifeStage::Stage::CHILD): {

            } break;

            case (LifeStage::Stage::TEEN): {

            } break;

            case (LifeStage::Stage::ADULT): {

            } break;

            case (LifeStage::Stage::DEAD): {

            } break;
        }

        // :: { DRAW SECTOR } ::
        switch (screen_type) {
            case (State::ScreenType::PET): {
                Screen::Pet(input, screen_type, tengotchi);
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

        // Make switch case for life stage, maybe put at top
    }

    // Free Pointers
    delete tengotchi;

    // Just to be extra sure, set them to nullptr
    tengotchi = nullptr;

    return 0;
}