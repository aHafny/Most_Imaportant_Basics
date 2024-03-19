/*
 ============================================================================
 Name        : two_nums_formela.c
 Author      : Ahmed Mahmoud Hafny
 Version     : 1.0
 Description : a program that take two integers from the user and print the results of a given EQN
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	long result;
	short num1, num2;

	printf("enter Two  numbers :");
    fflush(stdout);

	scanf ("%hd%hd",&num1 ,&num2);
    result = ((num1 +num2)*3)-10 ;

	printf("The result = %ld",result);

	return 0;
}
