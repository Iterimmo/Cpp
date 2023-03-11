// ООП. Дружественный метод класса.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <string>
#include <iostream>

class Human;
class Apple;

class Human {
    int age;
    friend Apple;
    

public:
    void TakeApple(Apple& apple);
    void LiсkApple(Apple& apple);
    void BiteApple(Apple& apple);

    Human(int age = 0) {
        this->age = age;
    }
    int GetAge() {
        return this->age;
    }

};




class Apple {

    friend Human;

private:
    int weight;
    std::string color;

    void Recovery(Human& human) {
        human.age -= 5;
    }
    
public:

    Apple(int weight = 0, std::string color = "NONE") {
        this->weight = weight;
        this->color = color;
    }

    
    int GetWeight() {
        return this->weight;
    }

};

void Human::TakeApple(Apple& apple) {
    std::cout << "\nВзяли яблоко цветом " << apple.color << " и весом " << apple.weight << " грамм" << std::endl;

}
void Human::LiсkApple(Apple& apple) {
    std::cout << "The apple was licked" << std::endl;
}
void Human::BiteApple(Apple& apple) {
    apple.weight -= 50;
    apple.Recovery(*this);
}

int main()
{
    setlocale(LC_ALL, "ru");

    Apple apple(200, "blue");
    Human human(60);

   

    human.TakeApple(apple);
    human.LiсkApple(apple);

    std::cout << "\n" << std::endl;
    std::cout <<"Изначальный вес " << apple.GetWeight() <<"\t Изначальный возраст " << human.GetAge() << std::endl << std::endl;

    human.BiteApple(apple);

    std::cout << "После укуса " << apple.GetWeight() << "\t Изначальный возраст " << human.GetAge() << std::endl;

}
