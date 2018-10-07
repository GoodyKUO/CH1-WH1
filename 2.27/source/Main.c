#include<stdio.h>
#include<stdlib.h>
main(){
	
	
	for (int b = 1; b <= 5; b++){
		for (int c = 5; c>b; c = c - 1)
		{
			printf(" ");
		}
		for (int a = 1; a <= (b * 2 - 1); a = a + 1)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
}