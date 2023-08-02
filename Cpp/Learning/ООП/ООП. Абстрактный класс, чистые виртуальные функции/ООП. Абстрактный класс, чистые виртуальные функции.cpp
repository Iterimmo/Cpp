// ООП. Абстрактный класс, чистые виртуальные функции.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


class Weapon {
public:
    virtual void Strike() = 0;

    void Foo(){
        std::cout << "foo()" << std::endl;
    }
};


class Gun : public Weapon {
public:
     void Strike() override {
        std::cout << "Bang !" << std::endl;
    }
};

class Pistol: public Gun {
public:

    void Strike() override {
        std::cout << "Pew-Pew-Pew";
    }
};

class SubmachineGun : public Gun {
public:

    void Strike() override {
        std::cout << "Trrrrrrrrrrrrrrrrrrrrrr" << std::endl;
    }

};
class RPG : public Weapon {
    void Strike() override {
        std::cout<<"BOOM" << std::endl;
    }
};
class Knife : public Weapon {
    void Strike() override {
        std::cout << "Chink !" << std::endl;
    }
};
class Player {
public:
    void Strike(Weapon* weapon) {
        weapon->Strike();
    }
};

int main()
{
    Gun gun;
    SubmachineGun smg;
    RPG rpg;
    Knife butterfly;

    Player player;
    Weapon* weapon = &smg;

    player.Strike(weapon);

    weapon = &butterfly;

    player.Strike(weapon);

    // Проверяем наследования
    smg.Foo();
    weapon->Foo();
    butterfly.Foo();

   
}
