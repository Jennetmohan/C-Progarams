/*
 ============================================================================
 Name        : Array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,num, arr[num+10];
	setbuf(stdout,NULL);
	printf("Enter array limit\n\n");
	scanf("%d", &num);
	printf("Enter array values\n\n");
	for (i=0;i<num;i++){
		scanf("%d",&arr[i]);
	}
	printf("Entered values are\n\n");
	for(i=0;i<num;i++){
		printf("%d\t",arr[i]);
	}

	return EXIT_SUCCESS;
}
