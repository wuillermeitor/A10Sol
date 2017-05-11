#pragma once

class MyForwardList {
public:
	struct node {
		int value;
		node *next;
	};
	node *first;
	node *second;

	//Métodos
	int front();
	void push_front(int newvalue);
	void pop_front();
	int insert_after();
	int erase_after();

	//Constructores
	MyForwardList();
	~MyForwardList();
	MyForwardList(MyForwardList &ForwardList);
	MyForwardList(int *a);
};
