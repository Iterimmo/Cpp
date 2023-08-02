// ПП. Цикл foreach.range-based циклы.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <list>
#define print(x) std::cout <<x<<std::endl
#define vector std::vector
int main()
{

	vector<int>vec = { 5,7,9,11,13,15 };

	int arr[] = { 5,5,2,4,2,1,24,6,3 };

	for(auto var:arr) {
		print(var);
	}
	//
	print('\n');
	for (auto &var : vec) {
		var += 100;
		print(var);
	}
	print(std::endl);
	for (const auto& var : vec) {
		print(var);
	}

}
