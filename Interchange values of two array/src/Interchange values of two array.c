/*
 ============================================================================
 Name        : Interchange.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,n,arr[100],brr[100],temp=0;
	setbuf(stdout,NULL);
	printf("Enter the size of arrays\n");
	scanf("%d",&n);
	printf("Enter the first array elements\n");

		for (i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		printf("Enter the second array elements\n");

		for (i=0;i<n;i++){
			scanf("%d",&brr[i]);
		}

		for (i=0;i<n;i++){
			temp=arr[i];
			arr[i]=brr[i];
			brr[i]=temp;
		}

		printf("Interchanged Arrays are:");

		for (i=0;i<n;i++){
			printf("%d ",arr[i]);
		}

		printf("\n");

		for (i=0;i<n;i++){
			printf("%d ",brr[i]);

		}

	return EXIT_SUCCESS;
}
