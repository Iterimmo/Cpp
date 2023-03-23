// STL.Array.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <array>
#define print(x) std::cout<<x<<std::endl

using namespace std;

int main()
{

	array<int, 5 > arr {7, 1, 4, 8, 4};

	for (auto i : arr)
		print(i);
	
	system("pause");
	return 0;
}
