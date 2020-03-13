#pragma once
#include <iostream>
#include "Link.h"

using namespace std;

class LinkedList {
public:



	Link* first;
	LinkedList() {
		first = 0;
	}
	void Display() {
		Link* current = first;
		while (current != 0) {
			current->Display();
			current = current->next;
		}
	}
	// EXERCISE 3
	Link* Find(int key) {
		Link* current = first;
		while (current->data != key) {
			if (current->next == 0) //if at end of list
				return 0;
			else
				current = current->next;
		}
	}
	void Insert(Link* newLink) {
		//prepend - add to front of list
		newLink->next = first;
		first = newLink;
	}
	void Append(Link* newLink) {
		//append - add to end of list
		Link* current = first;

		if (first == 0) //if emoty, newlink becomes first
			first = newLink;
		else { //scan through the list until next pointer is null
			while (current->next != 0)
				current = current->next;
			current->next = newLink; //once found end of list - add new node
		}
	}
	bool IsEmpty() {
		return (first == 0);
	}
	// EXERCISE 5
	Link* Delete(int key) {
		Link* current = first;
		Link* previous = first;
		while (current->data != key) {
			if (current->next == 0)
				return 0;
			else {
				current = previous;
				current = current->next;
			}
		}
		if (current == first)
			first = first->next;
		else
			previous->next = current->next;
		return current;
	}
	//EXERCISE 7
	Link* DeleteFirst() {
		Link* temp = first;
		first = first->next; //assign old first's next to be new first
		return temp;
	}
};

