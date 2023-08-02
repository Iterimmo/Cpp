// for.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int i = 0;

    for (;;) {
        ++i;
        std::cout << "i: " << i << std::endl;

        if (i > 10) {

            int b = 0;
            std::cout << "circle is gone" << std::endl;
            break; 
        }
        int k = 2;
    }
     std::cin.get();

}
