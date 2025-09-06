#include "../../include/input/input.hpp"
#include "../../include/sumistd/sumistd.hpp"

void Input::ScreenCase(std::string &input) {
    input = sumistd::ToLower(input);
    if (input == "feed") {

    } else if (input == "lights" || input == "light") {

    } else if (input == "play") {

    } else if (input == "discipline") {

    } else if (input == "sick") {

    } else if (input == "stats") {

    } else {
        sumistd::Flush();
        std::cout << input << " is not a valid option!" << std::endl;
    }
}