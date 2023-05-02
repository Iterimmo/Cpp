// TH. Потоки с параметрами.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <thread>
#include <chrono>

void DoWork(int a, int b) {

    std::this_thread::sleep_for(std::chrono::milliseconds(400));
    std::cout << "\tWorking..." << std::endl;

    std::this_thread::sleep_for(std::chrono::milliseconds(5000));
    std::cout << "\ta + b = " << a + b << std::endl;

    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    std::cout << "\tWork is over" << std::endl << std::endl;

}
int main()
{
    std::thread th(DoWork,5,7);


    for (size_t i = 0; true ; i++) {
        std::cout << "ID main thread " << std::this_thread::get_id() << "   " << (i+1) << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }



    th.join();
}

