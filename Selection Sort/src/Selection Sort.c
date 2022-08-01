/*
 ============================================================================
 Name        : Selection.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,n,arr[100],temp=0;
	setbuf(stdout,NULL);
	printf("Enter the array limit\n");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for (i=0; i<n-1;i++){
		for (j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
			else{
				continue;
			}
		}
	}
	printf("Sorted Array:\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return EXIT_SUCCESS;
}
