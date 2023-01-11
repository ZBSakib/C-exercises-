
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

struct Car AskCar() {
	struct Car c;
	printf("Give car information(name, model, manufacturer, price, cc, odometer reading)\n");
	scanf("%s %s %s %f %f %f", c.carname, c.model, c.manufacturer, &c.price, &c.cc, &c.odometer_reading);
	return c;
}




int main() {
	struct Car AskCar();
	struct Car Audi = { "Audi","A4", "Audi", 200000.0, 2000.0, 100000.0 };
	struct Car Toyota = { "Toyota", "Yaris","Toyota", 13000.0, 1600.0, 130000.0 };
	

	
	PrintCar(AskCar());
	PrintCar(Audi);
	PrintCar(Toyota);


}

/*Write a test program for earlier structure. The program shall
1.ask values from user and store the values into the structure, and
2.print the values saved in the structure.

