// DDS. Реализация односвязного списка.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

template<typename T>
class List
{
public:
	List();
	~List();
	void push_back(T data);
	int GetSize() { return Size; }
	T& operator [] (const int index);
private:

	// реализуем элемент

	template<typename T>
	class Node {

	public:
		Node* pNext;
		T data;
		Node(T data=T(), Node* pNext = nullptr) {
			this->data = data;                          // данные
			this->pNext = pNext;                        // указатель на следующий элемент
			//Size++;

		}

	};
	int Size;
	Node<T> * head;
};

template<typename T>
List<T>::List()
{
	Size = 0;
	head = nullptr;
}

template<typename T>
List<T>::~List()
{
}

template<typename T>
void List<T>::push_back(T data) {
	
	if (head == nullptr) {
	
		head = new Node<T>(data);
	}
	else {
		Node<T>* current = this->head;
		while (current->pNext != nullptr)
		{
			current = current->pNext;
		}
		current->pNext = new Node<T>(data); // Создание нового элемента и добавляем его в поле pNext, которое раньше было NULL
	}
	Size++;
}
template<typename T>
T& List<T>::operator[](const int index) {

	Node<T>* pcurrent = this->head;
	int current = 0;
	while (pcurrent != nullptr) {
		if (current == index) {
			return pcurrent->data;
		}
		current++;
		pcurrent = pcurrent->pNext;

	}

}
int main()
{

	List<int> lst;
	lst.push_back(5);
	lst.push_back(15);
	lst.push_back(244);

	std::cout << lst.GetSize()<< std::endl;;
	std::cout << lst[2] <<'\n' << std::endl;

	for (int i = 0; i < lst.GetSize(); i++)
		std::cout << lst[i] << std::endl;

	std::cout << '\n' << std::endl;

	List<int>list2;
	int numCount;
	std::cin >> numCount;
	for (int i = 0; i < numCount;i++) {
		std::cout << "#" << i << "  ";
		list2.push_back(rand() % 50);
		std::cout << list2[i] << std::endl;
	}

}

