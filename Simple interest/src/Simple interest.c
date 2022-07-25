/*
 ============================================================================
 Name        : interest.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int principal_amount=0;
	float interest=0, years=0, rate_of_interest=0;
		setbuf(stdout,NULL);
		printf("Enter\t\tamount,\t\tnumber of years and \t\trate of interest\n\n");
		scanf("%d,%f,%f",&principal_amount, &years,&rate_of_interest);
		interest=(principal_amount*rate_of_interest*years)/100;
		printf("Simple Interest is : %f", interest);
	return EXIT_SUCCESS;

}
