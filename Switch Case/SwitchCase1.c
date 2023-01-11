#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

void PrintDay(unsigned int day) {

	enum days {
		Monday = 1,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday,
		Sunday,
	};
	switch (day)
	{
	case Monday: printf("Monday \n"); break;
	case Tuesday: printf("Tuesday \n"); break;
	case Wednesday: printf("Wednesday \n"); break;
	case Thursday: printf("Thursday \n"); break;
	case Friday: printf("Friday \n"); break;
	case Saturday: printf("Saturday \n"); break;
	case Sunday: printf("Sunday \n"); break;
	default: printf("There are only 7 days in a week! \n");
	}
}
	int main() {

		PrintDay(1);
		PrintDay(7);
	}
/*Create a function that prints a day of week. The function gets day number as a parameter. Let Monday=1 and Sunday=7.
 Use enum-type and switch-case.*/