#include <iostream>
#include "../../include/screen/screen.hpp"
#include "../../include/sumistd/sumistd.hpp"
#include "../../include/input/input.hpp"

void Screen::Pet(std::string &input, State::ScreenType &screen_type, Pet::Tengotchi *tengotchi) {
    sumistd::Flush();
    input = "";
    std::cout << "|================================================================|" << std::endl;
    std::cout << "   {FEED}      {LIGHTS}      {PLAY}    {DISCIPLINE}     {STATS}   " << std::endl;
    std::cout << "|================================================================|" << std::endl;
    std::cout << "                                                                  " << std::endl;
    std::cout << "                                                                  " << std::endl;
    std::cout << "                                                                  " << std::endl;
    std::cout << "                                                                  " << std::endl;
    std::cout << "                                                                  " << std::endl;
    std::cout << "                                                                  " << std::endl;
    std::cout << "                                                                  " << std::endl;
    std::cout << "                                                                  " << std::endl;
    std::cout << "                                                                  " << std::endl;
    std::cout << "                                                                  " << std::endl;
    std::cout << "                                                                  " << std::endl;
    std::cout << "                                                                  " << std::endl;
    std::cout << "                                                                  " << std::endl;
    std::cout << "                                                                  " << std::endl;
    std::cout << "|================================================================|" << std::endl;
    std::cout << "--> ";
    std::cin >> input;
    Input::ScreenCase(input, screen_type);
}

void Screen::Feed(std::string &input, State::ScreenType &screen_type, Pet::Tengotchi *tengtochi) {
    sumistd::Flush();
    input = "";
    std::cout << "|================================================================|" << std::endl;
    std::cout << "                                                                  " << std::endl;
    std::cout << "                                                                  " << std::endl;
    std::cout << "  ##   ## ####   #   #                                            " << std::endl;
    std::cout << "  # # # # ##    ###  #                                            " << std::endl;
    std::cout << "  #  #  # #### #   # ###                                          " << std::endl;
    std::cout << "                                                                  " << std::endl;
    std::cout << "    ### ##  #   #   #### # #                                      " << std::endl;
    std::cout << "    #   # # #  ###  #    ##                                       " << std::endl;
    std::cout << "  ###   #  ## #   # #### # #                                      " << std::endl;
    std::cout << "                                                                  " << std::endl;
    std::cout << "                                                                  " << std::endl;
    std::cout << " <-- Back                                                         " << std::endl;
    std::cout << "|================================================================|" << std::endl;
    std::cout << "--> ";
    std::cin >> input;
    Input::ScreenCase(input, screen_type);
}

void Screen::Quit(std::string &input, State::ScreenType &screen_type, bool &is_running) {
    input = "";
    std::cout << "|================================================================|" << std::endl;
    std::cout << "  Are you sure you want to quit? [y/n]" << std::endl;
    std::cout << "|================================================================|" << std::endl;
    std::cout << "--> ";
    std::cin >> input;

    if (input == "y") {
        std::cout << "Goodbye!" << std::endl;
        is_running = false;
    }
}