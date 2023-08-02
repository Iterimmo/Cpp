#include "Constants.h"
#include "gravity.h"
#include <iostream>

int main()
{
    std::cout << "Enter the initial height of the tower in meters: ";
    double height;
    std:: cin >> height;
    gravity(height);
    return 0;
}




    