/*
 ============================================================================
 Name        : sum_upto_num.c
 Author      : Ahmed Mahmoud Hafny
 Version     : 1.0
 Description : a program that Print the sum of first X integers determined by the user
 ============================================================================
 */

/********************************      Header Files              *****************************************/
#include <stdio.h>

/********************************      Functions Declaration (Prototype) Section     *****************************************/
long sum_calc(unsigned long num);

/********************************      Main Section     *****************************************/
int main(void)
{
	unsigned long number, sum;

	printf("Enter The Number To sum all numbers upto it :");
	fflush(stdout);
	scanf("%lu", &number);

	sum = sum_calc(number);

	printf("the Summation of the numbers upto %lu is :%lu", number, sum);

	return 0;
}

/********************************      Functions Section     *****************************************/
long sum_calc(unsigned long num)
{
	unsigned char num_counter;
	unsigned long sum;

	for (num_counter = 0; num_counter <= num; num_counter++)
	{

		sum += num_counter;
	}

	return sum;

}

