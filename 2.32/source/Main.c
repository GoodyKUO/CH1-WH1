#include<stdio.h>
#include<stdlib.h>
int main(void){
	float a, b, c;

	printf("input your weight(kg)");
	scanf_s("%f", &a);
	printf("input your height(m)");
	scanf_s("%f", &b);
	c = a /(b*b);
	printf("BMI = %f\n" ,c);

	if (a < 18.5)printf("Underweight");
	else if (18.5<=a<=24.9)printf("normal");
	else if (25<=a<=24.9)printf("Overweight");
	else if (a<30)printf("Obese");

	system("pause");
}