/*
 ============================================================================
 Name        : sign_of_Number.c
 Author      : Ahmed Mahmoud Hafny
 Version     : 1.01
 Description : program that Checks the sign of the number whether its +ve ,-ve or zero.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
	signed int num;

	printf("Enter The Number:");
	fflush(stdout);
	scanf("%d", &num);

	if (num > 0) 
	{
		printf("The Number is Positive");
	}
	else if (num < 0)
	{
		printf("The Number Negative");
	}

	else
	{
		printf("The Number is Zero ");  //Note : if the input is a letter(s) the Output With also Be Zero
	}

	return 0;
}
