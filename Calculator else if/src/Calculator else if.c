/*
 ============================================================================
 Name        : Calculator.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num1, num2,choice;
	float result;
	setbuf(stdout,NULL);
	printf("Enter 2 numbers");
	scanf("%d,%d,",&num1,&num2);
	printf("Enter a choice to proceed. \n 1.Addition \t\t 2.Subtraction\n 3.Multiplication \t 4.Division");
	scanf("%d",&choice);
	if (choice==1){
		result=num1+num2;
		printf("Result =%f",result);
	}
	else if (choice==2){
		result=num1-num2;
		printf("Result =%f",result);
	}
	else if(choice==3){
		result=num1*num2;
		printf("Result =%f",result);
	}
	else if(choice==4){
		result=num1/num2;
		printf("Result =%f",result);

	}
	else{
		printf("Please enter a choice from the list");
	}

	return EXIT_SUCCESS;
}
