#include <iostream>
#include "MyList.h"


MyList::MyList() {
	first = nullptr;
	last = nullptr;
}

MyList::MyList(MyList &List) {
	node *pointer = List.first;
	while ((*pointer).next != nullptr) {
		push_back(pointer->value);
		pointer = pointer->next;
	}
}

MyList::~MyList() {
	for (int i = 0; i < this->size(); i++)
	{
		pop_back();
	}
}

int MyList::size() {
	int size = 0;
	for (node *pointer = first; pointer != last; pointer = (*pointer).next) {
		size++;
	}
	return size + 1;
}

void MyList::push_front(int newvalue) {
	first->previous = new node{ newvalue, first, nullptr };
	first = first->previous;
}

void  MyList::push_back(int newvalue) {
	if (last == nullptr)
	{
		last = new node{ newvalue, nullptr, last };
		first = last;
	}
	else
	{
		last->next = new node{ newvalue, nullptr, last };
		last = last->next;
	}
}

void MyList::pop_back() {
	const auto tmp = last->previous;
	delete last;
	last = tmp;
}


int main() {
	MyList*lista = new MyList();
	lista->push_back(5);
	lista->push_back(8);
	lista->push_back(1);

	lista->size();

	MyList*lista2 = new MyList(*lista);

	lista->~MyList();
	lista2->~MyList();

	return 0;
}