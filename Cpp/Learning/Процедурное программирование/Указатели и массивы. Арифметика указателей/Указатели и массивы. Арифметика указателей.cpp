#include <iostream>
#include<string>

// Передача значения в функцию по указателю

void Foo(int *pa) {

	(*pa)++;
}

// Передача 2 и более аргументов в функцию по указателю

void Foo(int* pa, int* pb, int* pc) {
	(*pa) = 555;
	(*pb)++;
	(*pc) = -20;

}
void Swap(int* pfirst, int* psecond) {
	int a = *pfirst;
	(*pfirst) = *psecond;
	(*psecond) = a;

}

// указатель на функцию

void Foo1() {
	std::cout << "FOO1()" << std::endl;

}void Foo2() {
	std::cout << "FOO2()" << std::endl;
}

// более практический кейс

std::string DataFromBD() {
	return "Data from BD";
}

std::string DataFromWebServer() {
	return "Data from webserver";
}
 
void ShowInfo(std::string (*output)()) {

	std::cout << output() << std::endl;

}

int main()
{
	const int SIZE = 5;
	int arr[]{ 1,2,3,4,5 }; // имя массива - это указатель на первый элемент.

	for (int i = 0; i < SIZE; i++) {
		std::cout <<"Mass is "<< arr[i] << std::endl;
	}

	std::cout << "------------" << std::endl;


	int* pArr = arr; // амперсант не нужен, т.к. arr - это уже указатель

	for (int i = 0; i < SIZE; i++) {
		std::cout <<"Pointer-mass is " << *(pArr + i) << std::endl;	// Прибавляет единичку к адресу и разименовывает. 
	}											// Т.к. массив идет последовательно, данная запись имеет место быть.
												// можно вывести как и предыдущий pArr[i]. 
	
	std::cout << "------------" << std::endl;

	std::cout << "arr address is  " << arr << "\npArr address is "<<pArr<< std::endl; // одинаковый адрес
	std::cout << (arr == pArr) << std::endl; // 1


	std::cout << "------------" << std::endl;


	int a = 0, a1 = 0, b = 0, c = 1;

	std::cout <<"Before func: " << a << std::endl;
	Foo(&a);
	std::cout <<"After func:  " << a << std::endl;

	std::cout << "------------" << std::endl;

	std::cout << "a1 = " << a1 << std::endl;
	std::cout << "b =  " << b << std::endl;
	std::cout << "c =  " << c << std::endl;

	std::cout << "foo" << std::endl;
	Foo(&a1, &b, &c);
	std::cout << "a1 = " << a1 << std::endl;
	std::cout << "b =  " << b << std::endl;
	std::cout << "c =  " << c << std::endl;
	
	std::cout << "------------" << std::endl;

	int first = 6, second = 155;
	Swap(&first, &second);
	std::cout << "first is: " << first << "\nsecond is: "<< second << std::endl;

	std::cout << "\n------------" << std::endl;

	/// Указатель на функции

	// тип функции(*имя указателя)(спецификация параметров);

	void(*fooPointer)();

	fooPointer = Foo1;
	fooPointer();
	fooPointer = Foo2;
	fooPointer();
	std::cout << "\n------------" << std::endl;

	ShowInfo(DataFromBD);
}

