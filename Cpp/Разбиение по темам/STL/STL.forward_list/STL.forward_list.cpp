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
int main()
{
    
    forward_list<int> frlst;

    auto iter_frlt = frlst.begin();







    print("\n-----------\n");
    list<int> lst = { 5,4,2,4,14,66 };

    PrintList(lst);
}

