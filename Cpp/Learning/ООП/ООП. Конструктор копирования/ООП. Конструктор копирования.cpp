// ООП. Конструктор копирования.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<string>
class Building {
private:
    int *floors;

    int age;
    std::string name;
    int array_size;
    
public:

    Building(int array_size, int age, std::string name) {

        this->array_size = array_size;
        this->floors = new int[array_size];

        for (int i = 0; i < array_size; i++) {
            floors[i] = i;
        }
        
        this->age = age;
        this->name = name;
        std::cout << "Вызвался конструктор:\t\t   " << this << std::endl;
    }
    ~Building() {
        std::cout << "Вызвался деструктор:  \t\t   " << this << std::endl;
        delete[] floors;

    }
    Building(const Building& other) {

        this->array_size = other.array_size;
        
        this->floors = new int[other.array_size];

        for (int i = 0; i < other.array_size; i++) {
            this->floors[i] = other.floors[i];
        }
        this->name = other.name;
        this->age = other.age;
        std::cout << "Вызвался конструктор по умолчанию: " << this << std::endl;

    }

  //  int GetFloors() {
  //      for(int i=0;i<;
  //  }
    int GetAge() {
        return age;
    }
    std::string GetName() {
        return name;
    }
    
 //   void SetFloors(int floors) {
 //       this->floors = floors;
 //   }
    void SetAge(int age) {
        this->age = age;
    }
    void SetName(std::string name) {
        this->name = name;
    }
    
};

Building Foo2() {
    std::cout << "Вызвалась функция Foo2" << std::endl;
    Building temp(1, 1, "ssss");
    return temp;
}

void Foo(Building object) {
    std::cout << "Вызвалась функция Foo" << std::endl;
}

int main()
{
    setlocale(LC_ALL, "ru");

    //Foo2();
    
    Building first(5, 5, "first");
    Building second(first);

    //Building CoffeeShoop(5, 20, "Maria");
    //Foo(CoffeeShoop);
    
    return 0;
}
