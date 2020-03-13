// Week 5 Stacks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Stacks1.h"
#include "TStack.h"
#include "Link.h"
#include "LinkedList.h"
#include "LinkedStack.h"
#include "TemplateLinkedStacked.h"
#include "AmazonBox.h"


using namespace std;

int main()
{
	cout << "==== Stacks ====" << endl;
	Stacks1* s = new Stacks1(4);
	s->Push(10);
	s->Push(712);
	s->Push(123);
	s->Push(62);

	while (s->IsEmpty()==false)
	{
		cout << s->Pop() << endl;
	}
	
	//Other way of doing it
	/* 
	for (int i = 0; i < 4; i++)
	{
		cout << s->Pop() << endl;
	}
	*/
	cout << "\n===Template===" << endl;

	TStack<float>* ts = new TStack<float>(4);

	ts->Push(712.232);
	ts->Push(61223.5532);
	ts->Push(6622.11);
	ts->Push(221.23);

	while (ts->IsEmpty()==false)
	{
		cout << ts->Pop() << endl;
	}

	//linked list used from previous lecture 
	cout << "\n===Linked Stacked===" << endl;

	LinkedStack* ls = new LinkedStack();
	ls->Push(101);
	ls->Push(1223);
	ls->Push(89123);
	ls->Push(25);

	while (ls->IsEmpty()==false)
	{
		cout << ls->Pop()->data << endl;
	}

	cout << "\n===Linked Stacked Template===" << endl;

	TemplateLinkedStack<AmazonBox>* tls = new TemplateLinkedStack<AmazonBox>();
	tls->Push(new AmazonBox("HP11 2JZ", 5));
	tls->Push(new AmazonBox("QH7 5ZG", 10));

	while (tls->IsEmpty()==false)
	{
		tls->Pop()->Display();
	}

}

