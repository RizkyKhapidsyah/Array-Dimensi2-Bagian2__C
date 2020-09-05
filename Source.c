#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* Created by Rizky Khapidsyah */

int main() {
	char Hari[7][10];
	int i;

	for (i = 0; i < 7; i++)
	{
		printf("Hari ke: %i: ", i + 1); gets(Hari[i]);
	}

	printf("\n");

	for (i = 0; i < 7; i++)
	{
		printf("Hari ke: %i: %s\n", i + 1, Hari[i]);
	}

	puts("\n");

	_getch();
	return 0;
}