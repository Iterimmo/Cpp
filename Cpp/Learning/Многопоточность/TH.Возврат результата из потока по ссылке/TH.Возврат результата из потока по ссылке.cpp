// TH.Возврат результата из потока по ссылке.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <thread>
#include <chrono>


void Double(int &a) {

	std::this_thread::sleep_for(std::chrono::milliseconds(2000));
	std::cout <<"Thread "<<std::this_thread::get_id() << " is working..." << std::endl;

	a *= 2;

	std::this_thread::sleep_for(std::chrono::milliseconds(2000));
	std::cout << "Thread " << std::this_thread::get_id() << " is ending..." << std::endl;

}


int main()
{
	setlocale(LC_ALL, "ru");
	
	int q = 5;

	std::thread th(Double,std::ref(q));

	for (size_t i = 0; i<8; i++) {

		std::cout << "ID main thread " << std::this_thread::get_id() << "  " << (i + 1) << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));

	}

	th.join();
	std::cout <<"------------------------- " << q << std::endl;

}