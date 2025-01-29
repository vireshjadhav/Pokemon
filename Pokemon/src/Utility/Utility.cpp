//Utility.cpp
#include "../../include/Utility/Utility.hpp"
#include <iostream>
#include <limits>
using namespace std;
using namespace N_Utility;

namespace N_Utility {

    //Function to clear the console
    void Utility::clearConsole()
    {
#ifdef _WIN32
        system("cls");
#else
        (void)system("clear");
#endif
    }

    //Function to wait for user to press Enter
    void Utility::waitForEnter()
    {
        cin.get();
    }

    //New helper Function
    void Utility::clearInputBuffer()
    {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}
