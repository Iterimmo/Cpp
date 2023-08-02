// Параметры функции main. argc и argv.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

void main(int argc, char* argv[])
{
    setlocale(LC_ALL, "ru");
    for (int i = 0; i < argc; i++) {
        std::cout << argv[i] << std::endl;
    }
}

