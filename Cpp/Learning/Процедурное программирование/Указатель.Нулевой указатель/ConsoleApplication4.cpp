// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int* pa = new int;
    *pa = 5;
    std::cout << *pa << std::endl;
    delete pa;
   std::cout << pa << std::endl; 
    pa = 0;
    pa = nullptr;
    pa = NULL;

    if (pa != NULL) {
        std::cout << *pa << std::endl;
    }
   // std::cout << *pa << std::endl; // тоже ошибка

}

