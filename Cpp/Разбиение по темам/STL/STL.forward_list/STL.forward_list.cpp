// STL.forward_list.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <forward_list>
#include <iostream>
#include <list>
#define print(x) std::cout<<x<<std::endl;

using namespace std;

template<typename T>
void PrintList(list<T>& fl) {

    for(const auto& i:fl)
        print(i)

}
template<typename T>

void PrintList(forward_list<T>& fl) {

    for (const auto& i : fl)
        print(i)

}
int main()
{
    
    forward_list<int> frlst = { 5,16,82,62 };

    auto iter_frlt = frlst.begin();
    iter_frlt++; // указывает на 1 элемент

    frlst.insert_after(iter_frlt, 9999);


    PrintList(frlst);

    print("\n-----------\n");
    list<int> lst = { 5,4,2,4,14,66 };

    PrintList(lst);

    system("pause");
    return 0;
}

