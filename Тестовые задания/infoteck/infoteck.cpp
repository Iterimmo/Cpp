// infoteck.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

const std::string REPLACE_USER_INTS = "KB";

int main(int argc,char* argv[]){
    setlocale(LC_ALL, "ru");

    // В первый поток

    std::cout << "Введите строку: ";
    std::string user_ints_str;
    std::cin >> user_ints_str;

    int user_ints_str_lenght = user_ints_str.length();
    if (user_ints_str_lenght > 64) {
        return 1;
    }
    

    for (int i = 0; i < user_ints_str_lenght; i++) {
        if (user_ints_str[i] <= '9' && user_ints_str[i] >= '0') {
            if (user_ints_str[i] % 2 == 0) {
                user_ints_str.replace(i, 1, REPLACE_USER_INTS);
                i++;
                user_ints_str_lenght++;
            }
        }
    }


    // Второй поток

    
    int counter = 0;
    for (int i = 0; i < user_ints_str_lenght; i++) {
       if (user_ints_str[i] <= '9' && user_ints_str[i] >= '0') {
           //std::cout << user_ints_str[i] << " ";
           counter += (user_ints_str[i] - '0');
           std::cout << counter << "\t" << (user_ints_str[i] - '0') << std::endl;

       }

    }
    
    return 0;
}   


