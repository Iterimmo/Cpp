// 1 Вопрос-ответ
/*
1. Что такое открытый член?

Член класса с спецификатором доступа public, доступ к которому имеют все объекты, как вне класса, так и внутри

2. Что такое закрытый член ?

Член класса с спецификатором доступа private, доступ к которому имеют объекты только внутри самого класса.

3. Что такое защищенный член и чем он отличается от закрытого ?

Член класса с спеицифкатором protected. В отличии от закрытого члена, защищенный может наследоваться в дочерние и дружественные классы.

4. Что такое спецификатор доступа ? 

Спецификатор доступа определяет кто имеет доступ к объекту класса.



*/
// 2 класс, который реализует функционал стека


#include <iostream>
class Stack {
private:
    int current_lenght = 0;
    int stack[10];
    bool initialized = false;

    bool Limit() {
        if (current_lenght != 10) {
            return true;
        }
        else {
            return false;
        }
    }
public:
    void Reset() {
        for (size_t i = 0; i < 10; i++) {
            stack[i] = 0;
        }
        bool initialized = true;

    }
    void PrintStack() {
        if (initialized) {
            for (auto i : stack) {
                std::cout << i << std::endl;
            }
        }
        else {
            std::cout << "Стек неинициализирован" << std::endl;
        }
    }

    bool Push() {
        if (Limit()) {
            for (int i = 1; i < 10; i++) {
                stack[i + 1] = stack[i];
            }
        }
    }

};


int main()
{
  //  Stack stack;
  //  stack.Reset();
    int stack[10];
    for (auto i : stack) {
        std::cout << i << std::endl;
    }
    std::cout << sizeof(stack) << std::endl;
    
}

