#pragma once

class MyList {
public:
	struct node {
		int value;
		node *next;
		node *previous;
	};
	node *first;
	node *last;

	//Métodos
	int front();
	int back();
	void push_front(int newvalue);
	void push_back(int newvalue);
	void pop_front();
	void pop_back();
	int insert(int pos, int newvalue);
	int erase(int pos, int newvalue);
	int size();

	//Constructores
	MyList();
	~MyList();
	MyList(MyList &List);
	MyList(int *a);
};
