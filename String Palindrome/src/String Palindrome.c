/*
 ============================================================================
 Name        : String.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(void) {
	char str1[50], str2[50];
	setbuf(stdout,NULL);
	printf("Enter the string to be checked\n");
	scanf("%s",str1);
	strcpy(str2,str1);
	strrev(str2);
	if(strcmp(str1,str2)==0){
		printf("String is a palindrome");

	}
	else{
		printf("String is not a palindrome");
	}
	return EXIT_SUCCESS;
}
