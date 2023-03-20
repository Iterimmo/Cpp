// STL.Vector.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <vector>
#include <iostream>
#define print(x) std::cout<<x<<std::endl
#define newline print('\n')
#define newpart print("-----------------------------")

int main()
{
    setlocale(LC_ALL, "ru");

    std::vector <int> vect;
    vect.push_back(5);
    vect.push_back(3);
    vect.push_back(2);

    for (int i = 0; i < vect.size(); i++) {
        print(vect[i]);
        
    }
    newline;
    for (int i = 0; i < vect.size(); i++) {
        print(vect.at(i));
    }
    newpart;
    newline;
    vect.clear();

    vect.push_back(15);
    vect.push_back(13);
    vect.push_back(12);

    vect.pop_back();
    vect.pop_back();

    for (int i = 0; i < vect.size(); i++) {
        print(vect.at(i));
    }
    newline;
    newpart;

    print(vect.size());
    print(vect.capacity());
    vect.reserve(500);

    newline;

    print(vect.size());
    print(vect.capacity());

    newline;

    vect.shrink_to_fit();
    print(vect.size());
    print(vect.capacity());

    newline;
    newpart;
    std::vector<int>vector(10,15);
    for (int i = 0; i < vector.size(); i++) {
        print(vector.at(i));
    }
}

