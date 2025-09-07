#include "../../include/pet/pet.hpp"

std::string Pet::CheckPetTypeName(PetType pet_type) {
    std::string name;
    switch (pet_type) {
        case (PetType::REN): {
            name = "Ren";
            return name;
        }
    }
}