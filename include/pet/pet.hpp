#pragma once

namespace Pet {
    enum class PetType {
        REN
    };

    class Tengotchi {
    private:
        PetType pet_type = PetType::REN;
        int hunger = 5;
        int happiness = 5;
    public:
        Tengotchi(PetType pet_type) {
            hunger = 5;
            happiness = 5;
        }
        PetType CheckPetType() { return pet_type; }
        int CheckHunger() { return hunger; }
        int CheckHappiness() { return happiness; }
    };
};