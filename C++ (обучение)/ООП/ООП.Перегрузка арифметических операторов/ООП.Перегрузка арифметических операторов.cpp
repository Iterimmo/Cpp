// ООП.Перегрузка арифметических операторов.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>

class Point {
    int x;
    int y;
    int z;

public:
    Point(int x, int y, int z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    Point() {
        this->x = 0;
        this->y = 0;
        this->z = 0;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}

