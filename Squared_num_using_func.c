/*
 ============================================================================
 Name        : Squared_num_using_func.c
 Author      : Ahmed Mahmoud Hafny
 Version     : 1.0
 Description : program calculates the sqaure of number using function
 ============================================================================
 */

#include <stdio.h>

/********************************      Functions Declaration (Prototype) Section     *****************************************/

signed long long sqaure(signed long num);


/********************************      Main Section     *****************************************/

int main(void)
{
	signed long number;
	signed long long resault;

	printf("Enter the Number:");
	fflush(stdout);

	scanf("%ld", &number);

	resault = sqaure(number);

	printf("the square of Number is %lld", resault);

	return 0;
}

/********************************      Functions Section     *****************************************/

signed long long sqaure(signed long num)
{
	signed long long Squared_Resault = num * num;
	return Squared_Resault;
}
