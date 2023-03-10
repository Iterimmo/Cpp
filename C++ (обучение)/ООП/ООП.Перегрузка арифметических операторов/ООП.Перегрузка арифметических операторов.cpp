// ООП.Перегрузка арифметических операторов.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#define print(x) std::cout<<x<<std::endl
class Point {
    int x;
    int y;
    int z;

public:
    Point(int x = 0, int y = 0, int z = 0) {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    Point operator +(const Point& other) {
        Point temp;
        temp.x = this->x + other.x;
        temp.y = this->y + other.y;
        temp.z = this->z + other.z;
        return temp;
    }

    int GetX() {
        return this->x;
    }
    int GetY() {
        return this->y;
    }
    int GetZ() {
        return this->z;
    }
    void SetX(int x){
        this->x = x;
    }
    void SetY(int y) {
        this->y = y;
    }
    void SetZ(int z) {
        this->z = z;
    }
};

int main()
{
    Point dot1(5, 2);
    Point dot2(0, 0, 4);
    Point dot3 = dot1 + dot2;

    print(dot3.GetX());
    print(dot3.GetY());
    print(dot3.GetZ());

    dot3 = dot3 + dot3 + dot3;

    print(dot3.GetX());
    print(dot3.GetY());
    print(dot3.GetZ());
}

