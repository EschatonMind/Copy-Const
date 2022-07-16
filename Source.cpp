#include <iostream>
#include "Car.h"
using namespace std;

int main() {

	Car Car1;
	Car1.setname("Yek");
	Car1.setColor("Yellow");
	Car Car2 = Car1;
	Car2.speak();
	Car2.setname("Do");
	Car2.setColor("Blue");
	Car1.speak();
	Car2.speak();

	return 0;
}