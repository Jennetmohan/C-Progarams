/*
 ============================================================================
 Name        : Linear.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,num ,array[100],key,flag=0;
	setbuf(stdout,NULL);
	printf("Enter Array limit\n\n");
	scanf("%d",&num);
	printf("Enter Array elements\n\n");
	for(i=0;i<num;i++){
		scanf("%d",&array[i]);
	}
	printf("Enter the number to be searched\n\n");
	scanf("%d",&key);
	for(i=0;i<num;i++){
		if(key==array[i]){

			flag=1;
			break;
		}

	}
	if (flag==1){
		printf("The number is on %d position",i+1);
	}
else{
		printf(" The Number Not found :( ");

			}
	return EXIT_SUCCESS;
}
