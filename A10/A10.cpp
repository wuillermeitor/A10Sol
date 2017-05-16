/*#include <iostream>
#include <list>
#include <queue>

void print(std::list<int>imprimible) {
	while (!imprimible.empty()) {
		std::cout << imprimible.front() << " ";
		imprimible.pop_front();
	}
}

std::list<int> superMerge(std::list<int>l1, std::list<int>l2) {
	std::list<int>supermerge;
	std::priority_queue<int>l1copy(l1.begin(), l1.end());
	std::priority_queue<int>l2copy(l2.begin(), l2.end());
	std::priority_queue<int>supermergecopy;
	while (!l1copy.empty()) {
		supermergecopy.push(l1copy.top());
		l1copy.pop();
	}
	while (!l2copy.empty()) {
		supermergecopy.push(l2copy.top());
		l2copy.pop();
	}
	while (!supermergecopy.empty()) {
		supermerge.push_back(supermergecopy.top());
		supermergecopy.pop();
	}
	return supermerge;
}

void change(std::list<int>&l1) {
	int firstEl = l1.front();
	int lastEl = l1.back();
	l1.pop_front();
	l1.pop_back();
	l1.push_front(lastEl);
	l1.push_back(firstEl);
}

int getElementPos(std::list<int>l1, int position) {
	int element;
	for (int i = 0; i < position; i++) {
		l1.pop_front();
	}
	element = l1.front();
	return element;
}

void removeDuplicates(std::list<int>&l1) {
	int aux;
	std::deque<int>tmp;
	while (!l1.empty()) {
		tmp.push_back(l1.front());
		l1.pop_front();
	}
	for (int i = 0; i < tmp.size(); i++) {
		aux=tmp[i];
		for (int j = 1 + i; j < tmp.size(); j++) {
			if (aux == tmp[j]) {
				tmp.erase(tmp.begin() + j);
			}
		}
	}
	while (!tmp.empty()) {
		l1.push_back(tmp.front());
		tmp.pop_front();
	}
}

void removeElement(std::list<int>&l1, int element) {
	std::deque<int>tmp;
	int aux;
	while (!l1.empty()) {
		tmp.push_back(l1.front());
		l1.pop_front();
	}
	for (int i = 0; i < tmp.size(); i++) {
		aux = tmp[i];
		if (aux == element) {
			tmp.erase(tmp.begin() + i);
			i--;
		}
	}
	while (!tmp.empty()) {
		l1.push_back(tmp.front());
		tmp.pop_front();
	}
}

bool palindrome(std::list<int>l1) {
	while (!l1.empty() && l1.size() != 1) {
		if (l1.front() != l1.back()) {
			return false;
		}
		else {
			l1.pop_front();
			l1.pop_back();
		}
	}
	return true;
}

int main() {
	std::list<int>l1({ 1, 3, 5, 6, 8, 5 });
	std::list<int>l2({ 5, 2, 6, 4, 5, 2, 8});
	superMerge(l1, l2);
	change(l1);
	getElementPos(l1, 4);
	removeDuplicates(l2);

	std::list<int>l3({ 3, 3, 5, 3, 6, 8, 5, 3, 3 });
	removeElement(l3, 3);

	std::list<int>l4({ 1, 2, 3, 4, 5, 4, 3, 2, 1 });
	palindrome(l4);
	return 0;
	}*/