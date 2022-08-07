/*
 ============================================================================
 Name        : Sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void sum();
int main(void) {
	sum();
	return EXIT_SUCCESS;
}

void sum(){
	int sum,num1,num2;
	setbuf(stdout,NULL);
	printf("Enter two numbers\n");
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	printf("sum = %d",sum);
}
