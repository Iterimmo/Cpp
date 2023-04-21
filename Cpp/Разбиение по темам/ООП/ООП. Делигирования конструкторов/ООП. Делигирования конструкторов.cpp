// ООП. Делигирования конструкторов.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Human {
public:
    int Age;
    float Weight;
    char Sex; // 0 - und, 1 - male,2 - female

    Human(int age) {
        this->Age = age;
        this->Weight = 0;
        this->Sex = 0;
        std::cout << "1 параметр" << std::endl;
    }
    Human(int age, float weight):Human(Age) {
        this->Weight = weight;
        std::cout << "2 параметрa" << std::endl;

    }

    Human(int age, float weight, char sex):Human(Age,Weight) {
        this->Sex = sex;
        std::cout << "3 параметрa" << std::endl;

    }
    // Возраст вводить обязательно, а вес и пол - нет. 
   
};

int main()
{
    setlocale(LC_ALL, "ru");
    Human human(30, 94.3, 2);
}

