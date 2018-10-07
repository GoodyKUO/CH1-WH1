#include <stdio.h>
#include <stdlib.h>

int a;
int main(){
	printf("input number\n");
	scanf_s("%d", &a);

	if (a % 2 == 0){
		printf("even\n");
	}
	else{
		printf("odd\n");

	}
	system("pause");
	return 0;

}