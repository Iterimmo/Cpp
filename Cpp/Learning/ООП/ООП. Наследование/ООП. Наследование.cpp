// ООП. Наследование.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

class Human {
    int age = 30;
    std::string name;

public:
    int GetAge() {
        return age;
    }
    void SetName(std::string name) {
        this->name = name;
    }
};

class Student: public Human{
public:
    std::string group;
    void Learn() {
        std::cout << "learning...." << std::endl;
    }
};

class ExtmuralStudent : public Student {
public:
    void Learn() {
        std::cout << "Ходить в универ = миф" << std::endl;
    }

};

class Professor: public Human {
public:
    std::string subject;
};

int main()
{
    setlocale(LC_ALL, "ru");

    Student st;
    st.SetName("Alex");
    st.group = "IAS-20";
    st.Learn();
    ExtmuralStudent emst;

    emst.SetName("NeAlex"); // из Human через Student
    emst.group = "!IAS-20"; // из Student

    emst.Learn();
    std::cout << emst.GetAge() << "     " << (emst.GetAge() == st.GetAge()) << std::endl;
}
