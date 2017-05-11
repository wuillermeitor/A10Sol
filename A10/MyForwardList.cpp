#include <iostream>
#include "MyForwardList.h"

void MyForwardList::push_front(int newvalue) {
	first = new node({ newvalue, first });
}