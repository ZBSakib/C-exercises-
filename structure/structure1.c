#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct Car {
	char carname[80];
	char model[80];
	char manufacturer[80];
	float price;
	float cc;
	float odometer_reading;
};

void PrintCar(struct Car c) {
	printf("%s, %s, %s, %f, %f, %f\n", c.carname, c.model, c.manufacturer, c.price, c.cc, c.odometer_reading);
}
	

	

int main() {
	struct Car Audi = { "Audi","A4", "Audi", 200000.0, 2000.0, 100000.0 };
	struct Car Toyota = { "Toyota", "Yaris","Toyota", 13000.0, 1600.0, 130000.0 };

	PrintCar(Audi);
	PrintCar(Toyota);
	
	
}
/*Design a structure to contain information of a second hand car. The structure shall contain at least manufacturer, model, engine size (cc), odometer reading, and price. 
HINT: For string type use char varname[80].*/
