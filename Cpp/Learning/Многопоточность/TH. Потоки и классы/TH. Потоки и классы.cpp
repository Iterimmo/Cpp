// TH.Возврат результата из потока по ссылке.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <thread>
#include <chrono>

class Any {
public:
	void Nothing() {

		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		std::cout << "ID потока Double: " << std::this_thread::get_id() << " начал работу" << std::endl;

		std::this_thread::sleep_for(std::chrono::milliseconds(3000));

		std::cout << "ID потока Double: " << std::this_thread::get_id() << " закончил работу" << std::endl;


	}

	void Triple(int& a) {

		std::this_thread::sleep_for(std::chrono::milliseconds(3000));
		std::cout << "ID потока Triple: " << std::this_thread::get_id() << " начал работу" << std::endl;
		a *= 3;

		std::this_thread::sleep_for(std::chrono::milliseconds(3000));

		std::cout << "ID потока Triple: " << std::this_thread::get_id() << " закончил работу" << std::endl;


	}

	int Sum(const int& a,const int &b) {

		std::this_thread::sleep_for(std::chrono::milliseconds(3000));
		std::cout << "ID потока Sum: " << std::this_thread::get_id() << " начал работу" << std::endl;

		std::this_thread::sleep_for(std::chrono::milliseconds(3000));

		std::cout << "ID потока Sum: " << std::this_thread::get_id() << " закончил работу" << std::endl;
		return a + b;

	}
};




int main()
{
	setlocale(LC_ALL, "ru");

	Any exc;

	//int res;

	/*
	std::thread th([&](){

		res = exc.Sum(2, 5);

	});

	*/
	int res = 5;

	std::thread th1(&Any::Nothing, exc);
	std::thread th2(&Any::Triple, exc, std::ref(res));



	for (auto i = 0; i < 10; i++) {
		std::cout << "ID потока Main " << std::this_thread::get_id() << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(800));
	}

	th1.join();
	th2.join();

    std::cout << "RESAULT: " << res << std::endl;


}