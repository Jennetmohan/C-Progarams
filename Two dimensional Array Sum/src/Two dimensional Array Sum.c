/*
 ============================================================================
 Name        : Two.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,a[3][3],b[3][3],c[3][3];
	setbuf(stdout,NULL);
	printf("Enter values for first array\n");

	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);

		}
	}

	printf("enter values for second array\n");
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			scanf("%d",&b[i][j]);

		}
	}
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("First Array \n\n------------\n");
	for (i=0;i<3;i++){
			for (j=0;j<3;j++){
				printf("%d\t",a[i][j]);

			}
			printf("\n");
		}
	printf("Second Array \n\n------------\n");
		for (i=0;i<3;i++){
				for (j=0;j<3;j++){
					printf("%d\t",b[i][j]);

				}
				printf("\n");
			}

	printf("Resultant Array \n\n------------\n");
			for (i=0;i<3;i++){
					for (j=0;j<3;j++){
						printf("%d\t",c[i][j]);

					}
					printf("\n");
				}
	return EXIT_SUCCESS;
}
