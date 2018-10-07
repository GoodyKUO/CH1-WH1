#include <stdio.h>
#include <stdlib.h>

int a;
int b;
int main(){
	printf("input 2  number\n");
	scanf_s("%d%d", &a,&b);

	if (a % b == 0){
		printf("the first number is a ultipleof the second\n");
	}
	else{
		printf("the first number is not a ultipleof the second\n");

	}
	system("pause");
	return 0;

}