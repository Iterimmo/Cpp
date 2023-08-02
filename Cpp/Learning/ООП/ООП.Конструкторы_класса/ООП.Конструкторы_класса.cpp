#define nextpart std::cout<<"\n-----------------------------"<<std::endl
#include <iostream>
class Point {
private:
    int x = 0;
    int y = 0;
public:

    Point() {
        x = 0;
        y = 0;
        std::cout << this << "- constructor" << std::endl;
 
    }
    Point(int x, int y) {
        this->x = x;
        this->y = y;
        std::cout << this << "- constructor" << std::endl;

    }

    void SetY(int valueY) {
        y = valueY;

    }
    int GetY() {
        return y;
    }
    void SetX(int valueX) {
        x = valueX;
    }
    int GetX() {
        return x;
    }
    
    void Print() {
        std::cout << "X: " << x << "\tY: " << y << std::endl;
    }
};

class Car {
    int* data;
public:
    Car(int size) {
        data = new int[size];

        for (int i = 0; i < size; i++) {
            data[i] = i;
        }

        std::cout << this << " Вызвался конструктор" << std::endl;
    }
    ~Car() {

        delete[] data;
        std::cout << this << " Вызывался деструктор" << std::endl;
    }
};

void Foo() {
    std::cout << "Область видимости функции Foo" << std::endl;
    Car audi(100);
    std::cout << "Конец области видимости функции Foo" << std::endl;
}

int main()
{
    setlocale(LC_ALL, "ru");
    Point dot_1;
    Point dot_2(5,16);
    dot_1.Print();
    dot_2.Print();
    nextpart;

    Car volga(5);
    Car bibibka(100);
   
    return 0;

}
