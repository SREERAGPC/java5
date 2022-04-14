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
	int a[500],j;
		int i,limit,temp,flag=0;
		printf("enter number of arrays");
		scanf("%d",&limit);
		printf("enter numbers");
		for(i=0;i<limit;i++){
			scanf("%d",&a[i]);
		}
		for(i=0;i<limit;i++){
			for(j=i+1;j<limit-1;j++){
				if(a[i]>a[j]){
					temp=a[i];
					a[i]=a[j];
					temp=a[j];

				}
			}
		}
		printf("sorted values");
		for(i=0;i<limit;i++){
			printf("%d\t",a[i]);
		}
	return EXIT_SUCCESS;
}
