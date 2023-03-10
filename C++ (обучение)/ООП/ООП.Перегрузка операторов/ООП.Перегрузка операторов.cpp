// ООП.Перегрузка операторов.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Building {
private:
    int* floors;

    int age;
    std::string name;
    int array_size;

public:

    // конструкторы-деструкторы
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

    // Перегрузка =,==,!=

    Building& operator = (const Building& other) {

        std::cout << "Вызвался оператор присваивания '=' " << this <<" скопирует " << &other << std::endl;

        this->array_size = other.array_size;

        if (this->floors != nullptr) { // проверка есть ли данные в нашем объекта. Если есть - удаляем.
            delete[] this->floors;
        } 
        this->floors = new int[array_size];

        for (int i = 0; i < array_size; i++) {
            this->floors[i] = other.floors[i];
        }
        this->name = other.name;
        this->age = other.age;
        
        return *this;
    }

    bool operator == (const Building & other) {
         

        std::cout << "Вызвался оператор равенства == " << std::endl;

        if (this->name != other.name && this->age != other.age && this->array_size != other.array_size) {
            return false;
        } 
        // если бы нужно было проверить без массива, то:
        // return this->name != other.name && this->age != other.age && this->array_size != other.array_size
      
        for (int i = 0; i < array_size; i++) {
            if (this->floors[i] != other.floors[i]) {
                return false;
            }
        }
        return true;
    }

    bool operator != (const Building& other) {


        std::cout << "Вызвался оператор неравенства != " << std::endl;

        if (this->name != other.name && this->age != other.age && this->array_size != other.array_size) {
            return true;
        }
        // если бы нужно было проверить без массива, то:
        // return this->name != other.name && this->age != other.age && this->array_size != other.array_size

        for (int i = 0; i < array_size; i++) {
            if (this->floors[i] != other.floors[i]) {
                return true;
            }
        }
        return false;
    }
    
    // Сеттеры-геттеры
    int GetArray_size() {
        return this->array_size;
    }
    int GetAge() {
        return this->age;
    }
    std::string GetName() {
        return this->name;
    }
    
    void SetAge(int age) {
        this->age = age;
    }
    void SetName(std::string name) {
        this->name = name;
    }

};

int main()
{
    setlocale(LC_ALL, "ru");
   
    Building first(5, 5, "first");
    Building second(2, 2, "second"); 
    bool equal = first == second;
    bool not_equal = first != second;
        
    std::cout << std::endl << first.GetAge() << " : " << first.GetArray_size() << " : " << first.GetName() << std::endl;
    std::cout << second.GetAge() << " : " << second.GetArray_size() << " : " << second.GetName() << std::endl;

    std::cout << "\n"<<"First и Second равны: "<< equal;
    std::cout << "\n" << "First и Second неравны: " << not_equal << "\n" << std::endl;

    first = second;
    equal = first == second;
    not_equal = first != second;

    std::cout << "\n" << "First и Second равны: " << equal;
    std::cout << "\n" << "First и Second неравны: " << not_equal << "\n" << std::endl;

    std::cout << first.GetAge() << " : " << first.GetArray_size() << " : " << first.GetName() << std::endl;
    std::cout << second.GetAge() << " : " << second.GetArray_size() << " : " << second.GetName() << "\n" << std::endl;


}

