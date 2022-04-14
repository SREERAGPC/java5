/*
 ============================================================================
 Name        : array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[500],b[500],temp[500];
    int size,i;
    setbuf(stdout,NULL);
	printf("enter the size of arrays");
	scanf("\n%d",&size);
	printf("Enter the values of Array 1");
	for(i=0;i<=size-1;i++){
		scanf("\n%d",&a[i]);
	}
	printf("Enter the values of Array 2 ");
	for(i=0;i<=size-1;i++){
		scanf("\n%d",&b[i]);
	}
	for(i=0;i<=size-1;i++){
	temp[i]=b[i];
	b[i]=a[i];
	a[i]=temp[i];

	}
	for(i=0;i<=size-1;i++){
			printf("\t%d",a[i]);
	}
	printf("\n");
	for(i=0;i<=size-1;i++){
			printf("\t%d",b[i]);
		}



	return EXIT_SUCCESS;
}
