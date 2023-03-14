
#include <iostream>
#define print(x) std::cout<<x << " "
#define newpart print("\n-----------------\n")
#define newline print("\n")

class Point {
    int x;
    int y;
    int z;

public:
    Point(int x = 0, int y = 0, int z = 0) {

        this->x = x;
        this->y = y;
        this->z = z;

    }

    Point operator +(const Point& other) {

        return Point(this->x + other.x, this->y + other.y, this->z + other.z);
    }
    Point operator -(const Point& other) {

        return Point(this->x - other.x, this->y - other.y, this->z - other.z);

    }
    Point operator *(const Point& other) {

        return Point(this->x * other.x, this->y * other.y, this->z * other.z);

    }
    Point operator /(const Point& other) {

        return Point(this->x / (float)other.x, this->y / (float)other.y, this->z / (float)other.z);

    }

    // ПРЕФИКС - без параметров
    Point& operator ++() {

        this->x++;
        this->y++;
        this->z++;
     
        return *this;
    }
    
    // ПОСТФИКС - с параметром
    Point& operator ++(int value) {

        Point temp(*this); // создаем объект с точно такими же полями
     
        this->x++;
        this->y++;
        this->z++;

        return temp; // возвращаем старый объект, до увеличения на 1
    } 
    Point& operator --() {

        this->x--;
        this->y--;
        this->z--;
     
        return *this;
    }
    
    Point& operator --(int value) {

        Point temp(*this); // создаем объект с точно такими же полями
     
        this->x--;
        this->y--;
        this->z--;

        return temp; // возвращаем старый объект, до увеличения на 1
    } 



    int GetX() {
        return this->x;
    }
    int GetY() {
        return this->y;
    }
    int GetZ() {
        return this->z;
    }
    void SetX(int x){
        this->x = x;
    }
    void SetY(int y) {
        this->y = y;
    }
    void SetZ(int z) {
        this->z = z;
    }
};

int main(int argc,char*argv[])
{
    Point dot1(5, 2);
    Point dot2(0, 0, 4);
    Point dot3 = dot1 + dot2;

    newline;

    print("Dot3:");

    print(dot3.GetX());
    print(dot3.GetY());
    print(dot3.GetZ());

    newline;
    dot3 = dot3 + dot3 + dot3; 
    print("Dot3 + Dot3 + Dot3:");
    print(dot3.GetX());
    print(dot3.GetY());
    print(dot3.GetZ());

    newpart;
    print("Dot2:");
    newline;

    print(dot2.GetX());
    print(dot2.GetY());
    print(dot2.GetZ());
    ++dot2; 

    newline;
    print(dot2.GetX());
    print(dot2.GetY());
    print(dot2.GetZ());
    newline;

    dot2--;
    print(dot2.GetX());
    print(dot2.GetY());
    print(dot2.GetZ());

}

