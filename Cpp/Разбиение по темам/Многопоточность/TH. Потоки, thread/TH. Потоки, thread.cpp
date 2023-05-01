// TH. Потоки, thread.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <thread>
#include <chrono>

void Do_work() {

    for (size_t i = 0; i < 8; i++) {
        std::cout << "ID thread (Do_work): " << std::this_thread::get_id() <<" " << (i+1) << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(800));
    }
}


int main()
{
    setlocale(LC_ALL, "ru");

    std::thread th1(Do_work);
    std::thread th2(Do_work);
    std::thread th3(Do_work);
    std::thread th4(Do_work);

    //th.detach(); // Пускаем в свободное плавание поток
   // std::cout << "Start main !" << std::endl;

  //  std::this_thread::sleep_for(std::chrono::milliseconds(1000));
  //  std::cout << std::this_thread::get_id() << std::endl;

  //  std::cout << "End main ?" << std::endl;

    for (size_t i = 0; i < 10; i++) {
        std::cout << "ID thread (main): " << std::this_thread::get_id() << " " << (i + 1) << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
  //  std::cout << "End main !" << std::endl;

    th1.join(); // Прерываем все остальные потоки и обрабатываем этот
    th2.join();
    th3.join();
    th4.join();

    return 0;
}

