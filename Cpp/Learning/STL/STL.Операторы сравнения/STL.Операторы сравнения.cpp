// STL.Операторы сравнения.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <array>
#include<vector>
#include<list>
#define print(x) std::cout<<x<<std::endl

using namespace std;

int main()
{

	array<int, 5> arr1{ 5,4,2,7,5 };
	list<int > arr2{ 5,4,2,7,5 };
	array<int, 3> arr3{ 100,124,615 };
	array<int, 5> arr4{ 5,4,2,7,5 };

	  
	bool result = arr1 == arr4;
//	bool result1 = arr1 == arr2;     - разные типы контейнеров
//	bool result2 = arr1 == arr3;     - разный размер контейнеров
//	bool resul3 = arr2 == arr3;      - и разный тип, и разный размер


	print(result);
	
	system("pause");
	return 0;
	
}
