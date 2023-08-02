#include <iostream>

// симуляция

class A {
public:
    A() {
    }
    virtual ~A() = 0;
};
A::~A() {};


class B :public A {
public:
    B() {
    }
    ~B() override {
    }
};


int main()
{
    setlocale(LC_ALL, "ru");
    A* bptr = new B;

    delete bptr;
}