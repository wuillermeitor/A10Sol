#include <iostream>
#include "MyForwardList.h"


MyForwardList::MyForwardList() {
	MyForwardList::first = nullptr;
}

MyForwardList::~MyForwardList() {

}

void MyForwardList::push_front(int newvalue) {
	first = new node({ newvalue, first });
}