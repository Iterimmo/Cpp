

#include <iostream>
#include <string>
#include <cmath>

int main()
{
    std::string var;
    std::cout<< "Input a number"<<std::endl;

    std::cin >> var;
    int len = var.length();

    std::cout << "Start: The base of the number system" << std::endl;
    int base;

    std::cin >> base;
    std::cout << "End: The base of the number system" << std::endl;

    int ends;
    std::cin >> ends;

    // Люую до-16тиручную в 10-чную


    int* mass = new int[len];
    int decimal = 0;

    
    for (int i = len-1; i >= 0; --i) { 
        int num;
        switch (var[i]) {
            case '0': num = 0*pow(base, len - i - 1); break;
            case '1': num = 1*pow(base, len - i - 1); break;
            case '2': num = 2*pow(base, len - i - 1); break;
            case '3': num = 3*pow(base, len - i - 1); break;
            case '4': num = 4*pow(base, len - i - 1); break;
            case '5': num = 5*pow(base, len - i - 1); break;
            case '6': num = 6*pow(base, len - i - 1); break;
            case '7': num = 7*pow(base, len - i - 1); break;
            case '8': num = 8*pow(base, len - i - 1); break;
            case '9': num = 9*pow(base, len - i - 1); break;
            case 'A': num = 10*pow(base, len - i - 1); break;
            case 'B': num = 11*pow(base, len - i - 1); break;
            case 'C': num = 12*pow(base, len - i - 1); break;
            case 'D': num = 13*pow(base, len - i - 1); break;
            case 'E': num = 14*pow(base, len - i - 1); break;
            case 'F': num = 15*pow(base, len - i - 1); break;
            
        }
        decimal += num;
        mass[i] = num;

    }

    std::cout << decimal << std::endl;

    // Перевод из 10-чной до 11-ричной.

    std::string low_end = "";
    int counter = decimal;

   if (ends <= 10) {
        while (counter >= ends) {
            low_end += std::to_string(counter % ends);
            counter /= ends;
           
        }
        low_end += std::to_string(counter);
   }
   else {

   }
   reverse(low_end.begin(), low_end.end());
   std::cout << low_end << std::endl;
}

