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

int main(void) {
	int i,num ,array[num],sum=0;
	setbuf(stdout,NULL);
	printf("Enter a array limit\n\n");
	scanf("%d", &num);
	printf("enter array elements\n\n");
	for(i=0;i<num;i++){
		scanf("%d",&array[i]);
	}
	for (i=0;i<num;i++){
		sum=sum+array[i];
	}
	printf("Sum of Array elements=%d",sum);
	return EXIT_SUCCESS;
}
