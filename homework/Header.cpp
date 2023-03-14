#include <iostream>
#include <string>
#include "Header.h"

MobilePhone::MobilePhone(string brand, string model, float price)
{
	this->brand = brand;
	this->model = model;
	this->price = price;
}

Person::Person(string name, int age, MobilePhone* mb)
{
	this->name = name;
	this->age = age;
	this->mb = mb;
}

void Person::Print()
{
	cout << "Hello! My name is " << name << endl;
	cout << "I'm " << age << " years old" << endl;
	cout << "Brand of my phone is " << mb->brand << endl;
	cout << "Model of my phone is " << mb->model << endl;
	cout << "It cost me " << mb->price << " dollars" << endl;
}
