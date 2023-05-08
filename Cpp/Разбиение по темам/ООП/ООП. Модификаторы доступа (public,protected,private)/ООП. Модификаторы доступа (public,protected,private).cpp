#include <iostream>

class A {
public:
    int a1 = 1;
private:
    int a2 = 2;
protected:
    int a3 = 3;
};

class B : public A {
public:
    void PrintA() {
        std::cout << a1 << " " << a3 << " " << std::endl; // a2 - недоступен.
   }

};
int main()
{

    B b;
    b.PrintA();
   
}

