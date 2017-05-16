#include <iostream>
#include "MyList.h"


MyList::MyList() {
	first = nullptr;
	last = nullptr;
}

MyList::MyList(MyList &List) {
	node *pointer = List.first;
	while ((*pointer).next != nullptr) {
		push_front(pointer->value);
		pointer = pointer->next;
	}
}

MyList::~MyList() {
	node *one = first;
	node *two;
	for (int i = 0; i < this->size(); ++i) {
		two = one;
		one = one->next;
		delete two;
	}
	first = nullptr;
	last = nullptr;
}

int MyList::size() {
	int size = 0;
	for (node *pointer = first; pointer != last; pointer = (*pointer).next) {
		size++;
	}
	return size;
}

void MyList::push_front(int newvalue) {
	node *nuevo = new node{ newvalue, first, nullptr };
	first->previous = nuevo;
	last = nuevo;
}

void  MyList::push_back(int newvalue) {
	
}

int main() {
	MyList*lista = new MyList();
	lista->push_front(5);
	lista->push_front(8);
	lista->push_front(1);

	return 0;
}