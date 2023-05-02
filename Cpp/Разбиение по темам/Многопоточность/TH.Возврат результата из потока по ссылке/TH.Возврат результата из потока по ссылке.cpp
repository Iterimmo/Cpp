// TH.Возврат результата из потока по ссылке.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <thread>
#include <chrono>


void Sum(int a, int b) {

	std::this_thread::sleep_for(std::chrono::milliseconds(2000));
	std::cout << "Working..." << std::endl;

	std::this_thread::sleep_for(std::chrono::milliseconds(2000));
	std::cout << "a + b = " << a + b << std::endl;

	std::this_thread::sleep_for(std::chrono::milliseconds(2000));
	std::cout << "Work is ending..." << std::endl;

}


int main()
{


}