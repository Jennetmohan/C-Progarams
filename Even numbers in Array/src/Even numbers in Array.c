/*
 ============================================================================
 Name        : Even.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,n,arr[100],even=0;
	setbuf(stdout,NULL);
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the array elements\n");

	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}


	for (i=0;i<n;i++){
		if (arr[i]%2==0){
			even+=1;
		}
		else{
			continue;
		}
	}
	printf("Number of even numbers in array=%d",even);

	return EXIT_SUCCESS;
}
