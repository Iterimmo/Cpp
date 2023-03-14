

#include <iostream>
#include <string>

int main()
{
    char symb = 'd';
    char string[255] = "Hellow !";
    char stringis[255] = "wordi !!!!";
    std::cout << strlen(string) << std::endl;
    std::cout << "\n------------------------------" << std::endl;
    const char* string2 = "Hello!";
    const char* string_double[] = { "Who","Are","There" };
    for (int i = 0; i < 3; i++) {
        std::cout << string_double[i] << std::endl;
    }
    std::cout << "\n------------------------------" << std::endl;

    std::cout << string << "\t" << stringis << std::endl;
    std::cout << "\n" << std::endl;

    strcat_s(string, stringis);

    std::cout << string << "\t" << stringis << std::endl;

    std::cout << "\n------------------------------" << std::endl;

    // если уйти от чаров //

    std::string normal_string = "Hello";
    std::string normal_string_2 = " world !";
    std::cout << normal_string + normal_string_2 << std::endl;
}
