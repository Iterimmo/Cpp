#include <iostream>

class A {
public:
    int a1 = 1;
private:
    int a2 = 2;
protected:
    int a3 = 3;
};

class B : protected A {
public:
    void PrintA() {
        std::cout << a1 << " " << a3 << " " << std::endl; // a2 - недоступен.
   }

};

class C : protected B {
public:
    void PrintB() {
        std::cout << a1 << " " << a3 << " " << std::endl;
    }
};
int main()
{

    B b;
    b.PrintA();
    C c;
    c.PrintB();
}

