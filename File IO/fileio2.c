#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int readValue(char* name, int default_)  {
	FILE* f = fopen("sample.cfg", "rt");

	if (f == NULL) {
		printf("cant find the file ! \n");
		return -1;
	}

	char line[50] = { '\0' };
	int getval = 0;

	while (fscanf(f, "%s %d", line, &getval) != -1) {

		if (!strcmp(line, name)) {
			fclose(f);
			return getval;
		}

	}

	fclose(f);
	return default_;
}
int main() {

	printf("%d \n", readValue("first_value", 0));
	printf("%d \n", readValue("second_value", 1));
	printf("%d \n", readValue("fourth_value", 321));

}

/*A configuration file sample.cfg:

first_value 1
second_value 11
third_value 123

Create a function int readValue(char *name, int default) which reads a value of the key from sample.cfg. If the key is not found, the function returns default. Order of the keys can vary.

Example:
readValue("first_value", 0) returns 1
readValue("second_value", 1) returns 11
readValue("fourth_key", 321) returns 321*/

