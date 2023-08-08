// TH.Mutex.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <mutex>
#include <thread>
#include <chrono>

std::mutex mtx;

void PrintSqrt(const char& ch) {

    mtx.lock();

    for (int i = 0; i < 5; i++) {
        for (int i = 0; i < 10; i++) {
            std::cout << ch;
            std::this_thread::sleep_for(std::chrono::milliseconds(20));
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    mtx.unlock();
}
int main()
{
    
    std::thread star(PrintSqrt, '*');
    std::thread proc(PrintSqrt, '%');


    star.join();
    proc.join();

}
