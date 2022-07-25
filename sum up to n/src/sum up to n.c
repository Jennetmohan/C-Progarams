/*
 ============================================================================
 Name        : sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, sum=0, range;
	setbuf(stdout,NULL);
	printf("If you enter a number, you will get sum of numbers up to that number."
			"\n----------------------------------------------------------------------"
			"\nPlease enter a number\n\n");
	scanf("%d",&range);
	for(i=1; i<=range;i++){
		sum=sum+i;

	}
	printf("Sum of numbers up to %d is %d",range,sum);
	return EXIT_SUCCESS;
}
