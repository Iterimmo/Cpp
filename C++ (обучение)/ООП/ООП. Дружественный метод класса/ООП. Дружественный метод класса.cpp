// ООП. Дружественный метод класса.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <string>
#include <iostream>

class Human;
class Apple;


class Human {

public:
    void TakeApple(Apple& apple);
};




class Apple {
private:
    int weight;
    std::string color;

    friend void Human::TakeApple(Apple& apple);

public:
    Apple(int weight = 0, std::string color = "NONE") {

        this->weight = weight;
        this->color = color;

    }

    
};

void Human::TakeApple(Apple& apple) {
    std::cout << "\nВзяли яблоко цветом " << apple.color << " и весом " << apple.weight << " грамм" << std::endl;

}


int main()
{
    setlocale(LC_ALL, "ru");
    Apple apple (200,"blue");
    Human human;
    human.TakeApple(apple);

}
