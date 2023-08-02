// Приведение типов.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    double flt = 3.14;

    // Явное преобразование - вручную преобразовываем

    std::cout << (int)flt << std::endl; // 3
    std::cout << (bool)flt << std::endl; // 1
    std::cout << (char)flt << std::endl; // double -> int -> char

    // Неявное преобразование - компилятор сам преобразовывает
    
    int a = flt;
    std::cout << a << std::endl; // сужающееся преобразование
    
    double dbl = a;  // расширающее преобразование



}

