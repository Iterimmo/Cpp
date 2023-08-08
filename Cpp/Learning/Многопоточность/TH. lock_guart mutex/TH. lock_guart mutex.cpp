// TH.Mutex.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <mutex>
#include <thread>
#include <chrono>

std::mutex mtx;

void PrintSqrt(const char& ch) {

    std::this_thread::sleep_for(std::chrono::milliseconds(1500));

    {
        std::lock_guard<std::mutex> guard(mtx);

        for (int i = 0; i < 5; i++) {
            for (int i = 0; i < 10; i++) {
                std::cout << ch;
                std::this_thread::sleep_for(std::chrono::milliseconds(20));
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(1500));

}
int main()
{ 

    std::thread star(PrintSqrt, '*');
    std::thread proc(PrintSqrt, '%');


    star.join();
    proc.join();

}
