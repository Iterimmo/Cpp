
#include <iostream>

int add(int x, int y);
int getInteger();
int main()
{

    std::cout << "The sum of x and y is: " << add(getInteger(), getInteger()) << std::endl;
    return 0;
}