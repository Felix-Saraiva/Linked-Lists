#pragma once
#include <iostream>
using namespace std;

//EXERCISE 1
class Link {
public:
	int data;
	Link* next;

	Link(int data) {
		this->data = data;
	}
	void Display() {
		cout << data << endl;
	}
	int GetData() {
		return data;
	}
};