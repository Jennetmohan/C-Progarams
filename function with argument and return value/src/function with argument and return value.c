/*
 ============================================================================
 Name        : function.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sum(int, int);
int main(void) {
	int res, num1,num2;
	setbuf(stdout,NULL);
	printf("Enter 2 numbers\n");
	scanf("%d%d", &num1,&num2);
	res=sum(num1,num2);

	printf("SUM = %d",res);
	return EXIT_SUCCESS;
}

int sum(a,b){
	int result;
	result=a+b;
	return result;
}
