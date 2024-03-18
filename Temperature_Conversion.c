/*
 ============================================================================
 Name        : Temperature_Conversion.c
 Author      : Ahmed Mahmoud Hafny
 Version     : 1.0
 Description : a program converts temperature from
 degrees Celsius to degrees Fahrenheit
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
	float temp_C, temp_F;
	printf("Enter The Temperature in Celsius:");
	fflush(stdout);
	scanf("%f", &temp_C);                                     //takes the Celsius Temperature from the user

	temp_F = (temp_C * (1.8)) + 32;                           // the EQN That Transfers the Temp from degrees Celsius to degrees Fahrenheit

	printf("The Temperature in Fahrenheit is %0.3f F", temp_F); //printout the Temperature in Fahrenheit
	fflush(stdout);

	return 0;

}
