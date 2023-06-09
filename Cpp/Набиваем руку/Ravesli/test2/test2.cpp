#include <iostream>
template <class T,class Y>
void func(const char &oper,const T& var1, const Y& var2) {
    switch (oper){
    case '+': std::cout <<"Sum var1 and var 2 is\t" << var1+var2 << std::endl; break;
    case '-': std::cout <<"Sub var1 and var 2 is\t" << var1-var2 << std::endl; break;
    case '*': std::cout <<"Mul var1 and var 2 is\t" << var1*var2 << std::endl; break;
    case '/': std::cout <<"Div var1 and var 2 is\t" << var1/var2 << std::endl; break;

    default:
        std::cout << "False operator" << std::endl;
        break;
    }

}

int main()
{
    std::cout << "Enter a operator: ";
    char oper;
    std::cin >> oper;
    std::cout << "Enter a two numbers: ";
    double var1, var2;
    std::cin >> var1 >> var2;
    func(oper, var1, var2);
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
