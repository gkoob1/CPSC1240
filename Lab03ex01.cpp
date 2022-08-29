/*
Name:	Graham koob
Group:	X01
Date:	2018.90.21
Lab:	3, Exercise 1

Purpose:	To create a template for future labs
*/

#include <stdio.h>

void	main() {
	float	sum, num1, num2;

	printf("hello, World!!");
	printf("\nPress enter to continue... \n\n");
	getchar();

	printf("Please enter a number: ");
	scanf("%f", &num1);
	getchar();

	printf("Please enter anoter number: ");
	scanf("%f", &num2);
	getchar();

	sum = num1 + num2;

	printf("\n\nThe sum of the two numbers is %0.2f.", sum);

	printf("\n\nPress enter to continue...");
	getchar();
}