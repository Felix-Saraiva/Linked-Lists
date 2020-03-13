#pragma once
#include <string>
#include <iostream>

using namespace std;
class AmazonBox
{
public:
	string address;
	double weight;
	AmazonBox* next;

	AmazonBox(string address, double weight) {
		this->address = address;
		this->weight = weight;

	}

	void Display() {

		cout << address << endl;
		cout << weight << endl;
	}

	string GetAddress() {
		return address;
	}

	double GetWeight() {
		return weight;
	}

private:

};

