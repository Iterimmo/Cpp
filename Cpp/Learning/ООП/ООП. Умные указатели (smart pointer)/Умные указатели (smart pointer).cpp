// Умные указатели (smart pointer).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#define print(x) std::cout << x << std::endl

template <typename T>
class SmartPointer {
public:
    SmartPointer(T *ptr) {
        this->ptr = ptr;
    }
    ~SmartPointer() {
        delete ptr;
    }
    T& operator *() {
        return *ptr;
    }
private:
    T* ptr;
};


int main()
{

    SmartPointer<int>pntr = new int(5);

    *pntr = 10;
    std::cout << *pntr << std::endl;
}

