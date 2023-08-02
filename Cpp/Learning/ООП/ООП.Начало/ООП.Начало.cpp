#include <iostream>
#include <string>
#define newpart std::cout << "\n--------------------------" << std::endl

class Human 
{
public:
    
    int age;
    int height;
    std::string name;

    void Print() 
    {
        std::cout << "имя " << name << "\t рост " << height << "\tвозраст " << age << std::endl;
    }

};

class Point {

public:
    int x;
    void Print() {
        std::cout << "x: " << x << "\ty: " << y << "\tz: " << z << std::endl;
        PrintY();
    }
private:
    int y;

    void PrintY() {
        std::cout << "y_private: " << y << std::endl;
    }

protected:
    int z;

};

class Car {

private:
    std::string color;
    int age;
public:
    
    int GetAge() {
        return age;
    }
    void SetAge(int valueAge) {
        age = valueAge;
    }

    std::string GetColor() {
        return color;
    }
    void SetColor(std::string valueColor) {
        color = valueColor;
    }

    void Print() {
        std::cout << "age: " << age << "\tcolor: " << color << std::endl;
    }
};
int main()
{
    setlocale(LC_ALL, "ru");
    
    Human firsthuman;
    
    firsthuman.age = 30;
    firsthuman.height = 184;
    firsthuman.name = "Ivan";
    
    firsthuman.Print();

    newpart;

    Point dot;
    dot.Print();

    newpart;

    Car volga;
    volga.SetAge(10);
    volga.SetColor("Silver");
    
    volga.Print();
  
}
