#pragma once
#include <iostream>
using namespace std;
class Car
{

private:
	string Color;
	string name;
public:
	Car() { cout << " car created : " << endl; }
	Car(const Car& other) { name = other.name; Color = other.Color; cout << " Car created by a copy constructor :  " << endl; }
	void setname(string name) { this->name = name; }
	void setColor(string Color) { this->Color = Color; }
	void speak() { cout << "I'm a car" << endl; }

};

