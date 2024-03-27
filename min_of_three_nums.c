/*
 ============================================================================
 Name        : min_of_three_nums.c
 Author      : Ahmed Mahmoud Hafny
 Version     : 1.0
 Description : a program that print the the minimum number between three numbers.
 ============================================================================
 */

#include <stdio.h>

int main()
{
	long num1, num2, num3, min;

	printf("Enter the three numbers :");
	fflush(stdout);
	scanf("%ld%ld%ld", &num1, &num2, &num3);

	// Assume that the first number is the minimum number
	min = num1;

	// Compare between the first number and second number
	if (num2 <= min)
	{
		min = num2;
	}

	// Compare between the third number and previous min number
	if (num3 <= min)
	{
		min = num3;
	}

	printf("the min number is: %ld", min);
	return 0;
}
