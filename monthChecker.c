/*
 ============================================================================
 Name        : monthChecker.c
 Author      : Ahmed Mahmoud Hafny
 Version     : 1.0
 Description : program That Takes the month number from the user
               and print out the number of days in this month
 ============================================================================
 */

#include <stdio.h>

int main(void)
{

	unsigned char month ;

	printf("Enter The Month:");
	fflush(stdout);
	scanf("%hhd", &month);

	switch (month)
	{

	case 2:
		printf("its a 28 day month (Except if its a Leap Year) ");
		break;

	case 4:
	case 6:
	case 9:
	case 11:
		printf("its a 30 day month");
		break;

	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("its a 31 day month");
		break;

	default:
		printf("Invalid Month Number");

	}

}
