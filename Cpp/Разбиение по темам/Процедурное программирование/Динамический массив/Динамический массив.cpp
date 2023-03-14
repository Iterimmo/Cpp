// Динамический массив.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// 

#include <iostream>
#include <string>

#define watch(x) std::cout << #x << " - " << x << '\n'

void FillArray(int* const arr, const int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10;
	}
}


void ShowArray(const int* const arr, const int size) {
	for (int i = 0; i < size; i++) {
		std::cout<< arr[i] << " ";
	}
}


void push_back(int*& arr, int& size, int const value) {  // value - элемент, который мы добавляем
														 // int*&arr - дает возможность подменить указателю подменить адресс
	int* new_arr = new int[size + 1];

	for (int i = 0; i < size; i++) {
		new_arr[i] = arr[i];
	}
	new_arr[size] = value;
	size++;
	delete[] arr;

	arr = new_arr;

}


void pop_back(int*& arr, int& size) {

	int* newArr = new int[size - 1];
	for (int i = 0; i < (size - 1); i++) {
		newArr[i] = arr[i];
	}
	size--;
	delete[] arr;
	arr = newArr;
	
}


void push_first(int* &arr, int& size, int value) {
	
	size++;
	int* new_arr = new int[size];
	for (int i = 1; i < size; i++) {
		new_arr[i] = arr[i-1];
	}
	new_arr[0] = value;
	delete[]arr;
	arr = new_arr;

}


void pop_first(int*& arr, int& size) {
	size--;
	int* newArr = new int[size];
	for (int i = 1; i < (size+1); i++) {
		newArr[i-1] = arr[i];
	}
	delete[] arr;
	arr = newArr;

}


void inline NewLine() {
	std::cout << '\n' << std::endl;
}
void inline NewPart() {
	std::cout << "--------------------------------------------" << std::endl;
}
template<typename T>
void inline print(T val) {
	std::cout << val << std::endl;
}

int main()
{
	setlocale(LC_ALL, "ru");

 	int size;
	std::cout << "Введите размер массива: ";
	std::cin >> size;
	int* arr = new int[size];

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 20;
		std::cout << arr + i << "\t" << *(arr + i) << std::endl; // выводим адрес и через табуляцию значение
	}
	NewLine();
	NewPart();
	// двумерный динамический массив

	int rows = 10;
	int cols = 3;

	int** db_arr = new int* [rows];
	
	for (int i = 0; i < rows; i++) {

		db_arr[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			db_arr[i][j] = rand() % 40;
			std::cout << db_arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	NewPart();
	
	for (int i = 0; i < rows; i++) {
		delete[] db_arr[i];
	 }
	delete[] db_arr;
	delete[] arr;

	// копирование двумерного массива 

	int sizer = 10;

	int* arr_1 = new int[sizer];
	int* arr_2 = new int[sizer];

	FillArray(arr_1, sizer);
	FillArray(arr_2, sizer);

	std::cout << "arr_1 is:" << std::endl;
	ShowArray(arr_1, sizer);
	NewLine();
	std::cout << "arr_2 is:" << std::endl;
	ShowArray(arr_2, sizer);
	
	// arr_1 = arr_2 // arr_1 станет указывать на те же адреса, что и arr_2. Значения в arr_1 потеряются в памяти,
					 // что чревато утечкой памяти
	
	delete[] arr_1; // удаляем старый, во избежании утечки памяти

	arr_1 = new int[sizer]; // создаем новый с размером 2-го массива

	for (int i = 0; i < sizer; i++) {
		arr_1[i] = arr_2[i];  // поэлементно копируем
	}

	std::cout << "\nNEW\narr_1 is:" << std::endl;
	ShowArray(arr_1, sizer);
	NewLine();
	std::cout << "arr_2 is:" << std::endl;
	ShowArray(arr_2, sizer);


	delete[] arr_2;
	delete[] arr_1;
	NewLine();
	NewPart();
	/// --------------- Измение массива --------------- ///

	size = 5;
	int* arriva = new int[size];

	FillArray(arriva, size);
	ShowArray(arriva, size);
	NewLine();

	push_back(arriva, size, 1000);
	ShowArray(arriva, size);
	NewLine();

	pop_back(arriva, size);
	ShowArray(arriva,size);
	NewLine();

	push_first(arriva, size, 1000);
	ShowArray(arriva, size);
	NewLine();

	pop_first(arriva, size);
	ShowArray(arriva, size);
	NewLine();
	
	int varible = 100, * pipa = &varible;
	print(*pipa);

	watch(varible);


}

