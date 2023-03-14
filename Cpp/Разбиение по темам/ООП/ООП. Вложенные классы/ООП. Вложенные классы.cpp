// ООП. Вложенные классы.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

class Image {

public:
    void GetImageInfo() {
        for (int i = 0; i < LENGHT; i++) {
            std::cout << "#" << i <<" " << pixels[i].GetInfo() << std::endl;
        }
    }
    static void AAAAAAA() {
        std::cout << "AAAAAAAAA" << std::endl;
    }

    class Pixel {
    private:

        int r;
        int g;
        int b;
    public:

        Pixel(int r, int g, int b) {
            this->r = r;
            this->g = g;
            this->b = b;
        }
        std::string GetInfo() {
            return "Pixel: r = " + std::to_string(r) + " g = " + std::to_string(g) + " b = " + std::to_string(b);
        }
    };
private:
    static const int LENGHT = 5;
    Pixel pixels[LENGHT]{
        Pixel(0,4,64),
        Pixel(255,255,255),
        Pixel(200,200,105),
        Pixel(153,200,144),
        Pixel(0,0,0)
    };
};



int main()
{
    Image image;
    image.GetImageInfo();

    Image::Pixel snipel(100, 100, 0);  // cоздается при условии, что Pixel в public



    std::cout << snipel.GetInfo() << std::endl;
}

