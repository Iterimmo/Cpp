// TH. Рекурсивный мутех.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>

std::recursive_mutex rm;

std::mutex m;

void Foo(int a) {

	rm.lock();
	std::cout << a << " ";

	std::this_thread::sleep_for(std::chrono::milliseconds(300));

	if (a <= 0) {
		std::cout << std::endl;
		rm.unlock();

		return;
	}
	a--;
	Foo(a);
	rm.unlock();
}
int main()
{

	std::thread th1(Foo, 10);
	std::thread th2(Foo, 10);

	th1.join();
	th2.join();

	std::cout << "SSSSS";
}
