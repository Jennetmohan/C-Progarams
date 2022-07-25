/*
 ============================================================================
 Name        : Multiplicatin.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,num,prod;
	setbuf(stdout,NULL);
	printf("Enter a number\n\n");
	scanf("%d",&num);
	for(i=1;i<=10;i++){
		prod=i*num;
		printf("%d x %d=%d\n\n",i,num,prod);
	}
	return EXIT_SUCCESS;
}
