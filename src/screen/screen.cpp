#include <iostream>
#include "../../include/screen/screen.hpp"
#include "../../include/sumistd/sumistd.hpp"

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
}

void Screen::Feed(std::string &input, State::ScreenType &screen_type, Pet::Tengotchi *tengtochi) {
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
}