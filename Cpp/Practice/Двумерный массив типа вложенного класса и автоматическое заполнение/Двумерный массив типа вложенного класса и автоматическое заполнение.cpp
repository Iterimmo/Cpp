// ООП. Вложенные классы.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <sstream>
#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
class Image {

public:

    static void AAAAAAA() {
        std::cout << "AAAAAAAAA" << std::endl;
    }

    class Pixel {
    private:
        int r;
        int g;
        int b;

    public:

        Pixel(int r = 0, int g = 0, int b = 0) {
            this->r = r;
            this->g = g;
            this->b = b;
        }
        std::string GetInfo() {
            return "Pixel: r = " + std::to_string(r) + " g = " + std::to_string(g) + " b = " + std::to_string(b);
        }
        std::string GetRGB() {
            return "(" + std::to_string(r) + ',' + std::to_string(g) + ',' + std::to_string(b) + ")";
        }
        void SetRandomColor() {
            this->r = rand() % 50 + 50;
            this->g = rand() % 150 + 50;
            this->b = rand() % 10 + 10;

        }
    };
    static const int LENGHT = 4;       // изображение 4х4

private:

};



int main()
{
    srand(time(0));
    Image::Pixel** arr = new Image::Pixel * [Image::LENGHT];           // 4 строк

    for (int i = 0; i < Image::LENGHT; i++) {
        arr[i] = new Image::Pixel[Image::LENGHT];           // 4 столбцов
    }

    // Заполнение массива

    for (int i = 0; i < Image::LENGHT; i++) {
        for (int j = 0; j < Image::LENGHT; j++) {
            arr[i][j].SetRandomColor();
        }
    }
    for (int i = 0; i < Image::LENGHT; i++)
    {
        for (int j = 0; j < Image::LENGHT; j++)
            std::cout << std::setw(5) << arr[i][j].GetRGB() << "\t";
        std::cout << std::endl;


    }
    for (int i = 0; i < Image::LENGHT; i++) {
        delete[] arr[i];
    }
}
