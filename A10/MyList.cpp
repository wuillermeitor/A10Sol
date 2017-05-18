#include <iostream>
#include "MyList.h"
#include <stdlib.h>
#include <time.h>


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
	return list_size;
}

void MyList::push_front(int newvalue) {
	first->previous = new node{ newvalue, first, nullptr };
	first = first->previous;
	list_size++;
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
	list_size++;
}

void MyList::pop_back() {
	const auto tmp = last->previous;
	delete last;
	last = tmp;
	list_size--;
}

void MyList::pop_front()
{
	const auto tmp{ first->next };
	delete first;
	first = tmp;
	list_size--;
}

int MyList::front() {
	return first->value;
}

int MyList::back() {
	return last->value;
}

void MyList::shiftLeft() {
	pop_front();
	push_back(rand() % 11);
}

void MyList::shiftRight() {
	push_front(rand() % 11);
	pop_back();
}

void MyList::rotateLeft() {
	int tmp = first->value;
	pop_front();
	push_back(tmp);
}

void MyList::rotateRight() {
	int tmp = last->value;
	push_front(tmp);
	pop_back();
}

void MyList::reverse() {
	MyList*tmp_list = new MyList();
	int tmp;
	int tmp_size = list_size;
	for (int i = 0; i < tmp_size; i++) {
		tmp = first->value;
		tmp_list->push_back(tmp);
		pop_front();
	}
	tmp_size = tmp_list->list_size;
	for (int j = 0; j < tmp_size; j++) {
		tmp = tmp_list->first->value;
		push_front(tmp);
		tmp_list->pop_front();
	}
}

void MyList::remove(int value) {
	MyList*tmp_list = new MyList();
	int tmp;
	int tmp_size = list_size;
	for (int i = 0; i < tmp_size; i++) {
		tmp = first->value;
		if (tmp != value) {
			tmp_list->push_back(tmp);
			pop_front();
		}
	}
	tmp_size = tmp_list->list_size;
	for (int j = 0; j < tmp_size; j++) {
		tmp = tmp_list->first->value;
		push_back(tmp);
		tmp_list->pop_front();
	}
}

int main() {

	srand(time(nullptr));

	MyList*lista = new MyList();
	lista->push_back(5);
	lista->push_back(8);
	lista->push_back(6);
	lista->push_front(2);

	lista->size();


	lista->shiftLeft();
	lista->shiftRight();
	lista->rotateLeft();
	lista->rotateRight();
	lista->reverse();
	lista->remove(5);

	return 0;
}