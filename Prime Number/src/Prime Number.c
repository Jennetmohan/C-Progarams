/*
 ============================================================================
 Name        : Prime.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,num,flag=0;
		setbuf(stdout,NULL);
		printf("Enter a number\n\n");
		scanf("%d", &num);
		for(i=2;i<=num/2;i++){
			if(num%i==0){
				flag=1;
				break;
			}
		}
		if (flag==0){
			printf("Number is Prime");
		}
		else{
			printf("Number is  not a prime");
		}
	return EXIT_SUCCESS;
}
