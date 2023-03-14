#pragma once
#include <iostream>
#include <string>
using namespace std;

class MobilePhone {
public:
	string brand;
	string model;
	float price;
	MobilePhone(string brand, string model, float price);
};

class Person {
public:
	string name;
	int age;
	MobilePhone* mb;
	Person(string name, int age, MobilePhone* mb);
	void Print();
};