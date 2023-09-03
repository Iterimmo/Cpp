#include <iostream>


void TrimRight(char* s)
{
    if (!s) return; // нет строки (нулевой указатель)
    char* frs = s; // указатель на начало последней (самой правой) группы пробелов
    for (; *s; ++s)
        if (*s != ' ')
            frs = s + 1;
    *frs = 0;      // задаем новый конец строки
}


#include <iostream>

int main() {
    setlocale(LC_ALL, "ru");
    const char* inputString = "i i    i    ";
    int lenght = strlen(inputString);
    char* dynamicArray = new char[lenght + 1]; // +1 для символа '\0'
    strcpy_s(dynamicArray, lenght + 1, inputString);





    TrimRight(dynamicArray);
    int counter = 0;
    for (int i = 0; i < lenght; ++i) {
        std::cout << i << " : " << dynamicArray[i] << std::endl;
    }
    return 0;
    }
