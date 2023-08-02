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
/*
1. закрытый целочисленный фиксированный массив длиной 10 элементов;

2. закрытое целочисленное значение для отслеживания длины стека;

3. открытый метод с именем reset(), который будет инициализировать значением 0 длину и все значения элементов;

4. открытый метод с именем push(), который будет добавлять значение в стек.Метод push() должен возвращать значение false, если массив уже заполнен, в противном случае — true;

5. открытый метод с именем pop() для возврата значений из стека.Если в стеке нет значений, то должен выводиться стейтмент assert;

6. открытый метод с именем print(), который будет выводить все значения стека. 
*/

#include <iostream>
#include<cassert>

class Stack {
private:
    int stack[10];
    int current_lenght = 0;
    bool initialized = false;

    bool NoLimit() {
        return (this->stack[9] == 0);
    }
public:
    void Reset() {
        for (size_t i = 0; i < 10; i++) {
            this->stack[i] = 0;
        }
        this->initialized = true;
        this->current_lenght = 0;

    }

    void PrintStack() {
        if (initialized) {
            for (const auto& i : this->stack) {
                std::cout << i;
            }
            std::cout << std::endl;
        }
        else {
            std::cout << "Стек неинициализирован" << std::endl;
        }
    }

    bool Push(int val) {
        if (!initialized) {
            Reset();
        }
        if (NoLimit()) {

            for (int i = 9; i > 0; i--) {
                this->stack[i] = this->stack[i - 1];
                if (i == 1) {
                    this->stack[i - 1] = val;
                }
            }
            this->current_lenght++;
            return true;
        }
        else {
            return false;
        }
    }

    void Pop() {

        if (!initialized) {
            Reset();
        }

        assert(current_lenght > 0, && "stack is empty");

        for (int i = 0; i < 9; i++) {
            this->stack[i] = this->stack[i + 1];
            if (i == 8) {
                this->stack[i + 1] = 0;
            }
        }
        this->current_lenght--;
       
    }

    int Len() {
        return this->current_lenght;
    }
};

int main()
{
    setlocale(LC_ALL, "ru");
     Stack stack;
     stack.Reset();
     stack.PrintStack();
     stack.Push(5);

     stack.PrintStack();
     stack.Pop();
     stack.Push(5);
     stack.Push(5);
     stack.Push(5);


     stack.PrintStack();

     std::cout << stack.Len() << std::endl;
     stack.Reset();
     std::cout << stack.Len() << std::endl;
     stack.PrintStack();


};


