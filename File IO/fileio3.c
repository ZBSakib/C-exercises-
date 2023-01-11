#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct gameScore {
	char name[80];
    int score;
}high_score;

void PrintScore(const high_score* score) {
	printf("{%s, %d }", score->name, score-> score);
}

#define N_players 5


int main(int argc, char** argv) {
	char* filename = "highscore.bin";


	high_score highScore[N_players] = { {"Abbey",210},{"Dane", 208},{"Christene", 194},{"Zack", 190},{"Mary", 185} };
	for (int i = 0; i < N_players; i++) {
		PrintScore(&highScore[i]);
		printf("\n");

	}
	
	FILE* f = fopen(filename, "wb");
	if (f == NULL) {
		fprintf(stderr, "fopen(%s) failed at %s %d\n", filename, __FILE__, __LINE__);
		exit(1);
	}

	fwrite(highScore, sizeof(high_score), N_players, f);

	fclose(f);
}

/*Implement high score saving system which stores the highest score and name of the player to a file. Hint: Use
struct gameScore {
  char name[80];
  int score;
};

to store score of a game.*/
