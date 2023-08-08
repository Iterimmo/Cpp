// TH.Возврат результата из потока по ссылке.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <thread>
#include <chrono>


void DoWork(int &a) {

	std::this_thread::sleep_for(std::chrono::milliseconds(3000));
	std::cout << "ID потока DoWork: " << std::this_thread::get_id() << " начал работу" << std::endl;
	a *= 2;

	std::this_thread::sleep_for(std::chrono::milliseconds(3000));

	std::cout << "ID потока DoWork: " << std::this_thread::get_id() << " закончил работу" << std::endl;


}


int main()
{
	setlocale(LC_ALL, "ru");
	
	int q = 5;

	std::thread th(DoWork, std::ref(q));

	for (int i = 0; i < 10; i++) {
		std::cout << "ID потока Main " << std::this_thread::get_id() << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(800));
	}


	th.join();

	std::cout << q;


}