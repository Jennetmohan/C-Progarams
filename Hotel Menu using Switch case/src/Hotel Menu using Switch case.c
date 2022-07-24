/*
 ============================================================================
 Name        : Hotel.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int choice;
	setbuf(stdout,NULL);
	printf("Menu Card\n-----------------\nPlease select your choice.\n1.Porotta\t2.Fried Rice\n3.Biriyani\t4.Noodles\n\n\n");
	scanf("%d",&choice);
	switch(choice){
	case 1:
		printf("You have selected Protta");
		break;
	case 2:
		printf(" You have selected Fried rice");
		break;
	case 3:
		printf(" You have selected Biryani");
		break;
	case 4:
		printf(" You have selected Noodles");
		break;
	default:
		printf("Sorry!!! that is not from the list");
	}
	return EXIT_SUCCESS;
}
