/*
 ============================================================================
 Name        : compare_two_nums.c
 Author      : Ahmed Mahmoud Hafny
 Version     : 1.0
 Description : a program that print the relation between two
               integer number if those numbers are equal, not equal and
               which one contain the higher value.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
	long num1, num2;

	printf("Enter two Numbers:");       // get the two numbers
	fflush(stdout);
	scanf("%ld%ld", &num1, &num2);

	if (num1 > num2)                   // compare the two numbers to define which is larger
	{
		printf("the 1st Number (%ld) is larger than the 2nd Number (%ld) ",
				num1, num2);

	}
	else if (num2 > num1)
	{
		printf("the 2nd Number (%ld) is larger than the 1st (%ld)", num2, num1);

	}
	else
	{
		printf("the Numbers Are Equal");          //Note :if the user Trys to enter a character the output will be unpredicted
	}

	return 0;
}
