#pragma once

namespace Pet {
    enum class PetType {
        REN
    };

    class Tengotchi {
    private:
        PetType pet_type;
        int hunger;
        int happiness;
        bool is_sick;
        bool is_dead;
    public:
        Tengotchi(PetType pet_type) {
            hunger = 5;
            happiness = 5;
            is_sick = false;
            is_dead = false;
        }
        PetType CheckPetType() { return pet_type; }
        int CheckHunger() { return hunger; }
        int CheckHappiness() { return happiness; }
        bool IsDead() { return is_dead; }
        bool IsSick() { return is_sick; }

        void Feed() { hunger += 1; }
        void Play() { happiness += 1; } // Will probably change the logic for this one
        void BecomeSick() { is_sick = true; }
        void Die() { is_dead = true; }
    }; 
};