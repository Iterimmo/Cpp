#include <iostream>

// симуляция

class A {
public:
    A() {
        std::cout << "Выделена динамическая память объекта класса А" << std::endl;
   }
    virtual ~A() {
        std::cout << "Освобождена динамическая память объекта класса А" << std::endl;
    }
};
class B :public A {
public:
    B() {
        std::cout << "Выделена динамическая память объекта класса В" << std::endl;
    }
    ~B() override {
        std::cout << "Освобождена динамическая память объекта класса B" << std::endl;
    }
};


int main()
{
    setlocale(LC_ALL, "ru");
    A *bptr = new B;


    delete bptr;
}