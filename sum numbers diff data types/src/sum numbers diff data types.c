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
	int num1=0;
	float num2=0, sum=0;
		setbuf(stdout,NULL);
		printf("Enter two numbers");
		scanf("%d,%f",&num1, &num2);
		sum=num1+num2;
		printf("Result is : %f", sum);
	return EXIT_SUCCESS;
}
