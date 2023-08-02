
#include <iostream>
#include <cmath>
int main()
{
    std::cout << "Input number: ";
    int n;
    std::cin >> n;

    int n_copy = n;
    int lenght = 0;
    while (n_copy)
    {
        lenght++;
        n_copy /= 10;
        
    }
    int i = 0;
    while (lenght) {
        std::cout << i << " figure: "  << (n / int(std::pow(10, lenght - 1))) % 10 << std::endl;
        lenght--;
        i++;
    }
}

