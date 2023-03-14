// ООП. Дружественные функции.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include<iostream>
#define print(x) std::cout<<x<<std::endl
#define newpart print("\n-------------------------------\n")

class First;
class Second;

class First {
private:
    int a;
    int b;
public:
    First(int a = 0,int b = 0) {
        this->a = a;
        this->b = b;
    }
    int GetA() {
        return this->a;
    }
    int GetB() {
        return this->b;
    }
 
    void SetA(int a) {
        this->a = b;
    }
    void SetB(int b) {
        this->a = b;
    }
    friend void X_equal_A(Second& x, First& a);
};


class Second {
private:
    int x;
    int y;
public:
    Second(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
    }

    int GetX() {
        return this->x;
    }
    int GetY() {
        return this->y;
    }

    //void SetX(int x) {
    //    this->x = x;
    //}
    //void SetY(int y) {
    //    this->y = y;
    //}
    friend void Null_X(Second& value); // friend <прототип функции>
    friend void X_equal_A(Second& x, First& a);
};

void Null_X(Second& value) {
    
    value.x = 0;
}

void X_equal_A(Second& scnd, First& frst) {

    scnd.x = frst.a;
}

int main()
{
    setlocale(LC_ALL, "ru");
    First first(5, 1);
    Second second(100, 200);

    print("Исходное значение");
    print(second.GetX());

    Null_X(second);
    print("Х после функции Null_X");
    print(second.GetX());


    X_equal_A(second, first);
    print("Х после функции X_equal_A (a = 5)");
    print(second.GetX());

}
