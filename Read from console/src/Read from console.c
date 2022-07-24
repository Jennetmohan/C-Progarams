/*
 ============================================================================
 Name        : Read.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number;
	float decimal;
	char alpha;
	setbuf(stdout,NULL);
	printf("Enter an alphabet");
	scanf("%c",&alpha);
	printf("Enter an integer number");
	scanf("%d", &number);
	printf("Enter a decimal valued number");
	scanf("%f",&decimal);

	printf("You have entered %d,%f,%c as values",number,decimal,alpha);
	return EXIT_SUCCESS;
}
