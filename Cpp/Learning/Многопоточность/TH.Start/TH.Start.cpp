// TH.Start.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <thread>
#include <string>
#include <chrono>

void run(std::string ThreadName) {
    for (int i = 0; i < 10; i++) {
        std::string thread_name = ThreadName + std::to_string(i) + "\n";
        std::cout << thread_name;
        std::this_thread::sleep_for(std::chrono::milliseconds(800));
    }
}


int main()
{
   // std::cout << std::thread::hardware_concurrency() << std::endl;

    std::thread tA(run, "A");
    std::thread tB(run, "\tB");

    tA.join();
    tB.join();


}

