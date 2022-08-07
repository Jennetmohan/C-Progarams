/*
 ============================================================================
 Name        : Display.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void getArray();
void displayArray(int arr[3][3]);

int main(void) {

	setbuf(stdout,NULL);
	getArray();

	return EXIT_SUCCESS;
}

void getArray(){
	int i,j,arr[3][3];
	printf("Enter values of the array\n");
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	displayArray(arr);
}

void displayArray(int arr[3][3]){
	int i,j;
	printf("The array is:\n\n");
	for (i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%d\t",arr[i][j]);
			}
			printf("\n");
		}
}
