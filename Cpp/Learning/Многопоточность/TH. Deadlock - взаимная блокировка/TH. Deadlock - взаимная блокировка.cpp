// TH.Mutex.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <mutex>
#include <thread>
#include <chrono>

std::mutex mtx1;
std::mutex mtx2;

void Print1() {

    mtx2.lock();

    std::this_thread::sleep_for(std::chrono::milliseconds(1));

    mtx1.lock();

    for (int i = 0; i < 5; i++) {

        for (int i = 0; i < 10; i++) {
            std::cout << "*";
            std::this_thread::sleep_for(std::chrono::milliseconds(20));
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    mtx1.unlock();
    mtx2.unlock();

    std::this_thread::sleep_for(std::chrono::milliseconds(1500));

}

void Print2() {

    mtx1.lock();

    std::this_thread::sleep_for(std::chrono::milliseconds(1));

    mtx2.lock();

    for (int i = 0; i < 5; i++) {

        for (int i = 0; i < 10; i++) {
            std::cout << "%";
            std::this_thread::sleep_for(std::chrono::milliseconds(20));
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    mtx1.unlock();
    mtx2.unlock();

    std::this_thread::sleep_for(std::chrono::milliseconds(1500));

}
int main()
{

    std::thread th1(Print1);
    std::thread th2(Print2);


    th1.join();
    th2.join();

}
