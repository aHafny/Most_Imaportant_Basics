/*
 ============================================================================
 Name        : simple_calculator.c
 Author      : Ahmed Mahmoud Hafny
 Version     : 1.0
 Description : a simple calculator using switch-case and user defined function
 The calculator takes the operation
 (+ or – or * or /) and takes the two input arguments
 and print the results.
 ============================================================================
 */
/********************************      Header Files              *****************************************/
#include <stdio.h>

/********************************      Functions Declaration (Prototype) Section     *****************************************/
double clac(float num_1st, float num_2nd, unsigned char operator);

/********************************      Main Section     *****************************************/
int main(void)
{
	float num1, num2;
	unsigned char operate;

	printf("Enter The operator (+, -, *, / ) :");
	fflush(stdout);
	scanf("%c", &operate);

	printf("Enter The Two Numbers :");
	fflush(stdout);
	scanf("%f%f", &num1, &num2);

	clac(num1, num2, operate);

	return 0;

}

/********************************      Functions Section     *****************************************/
double clac(float num_1st, float num_2nd, unsigned char operator)
{
	double resault;

	switch (operator)
	{

	case '+':
		resault = num_1st + num_2nd;
		return printf("\n%.4f + %.4f = %.4f", num_1st, num_2nd, resault);
		break;
	case '-':
		resault = num_1st - num_2nd;
		return printf("\n%.4f - %.4f = %.4f", num_1st, num_2nd, resault);
		break;

	case '/':
		resault = num_1st / num_2nd;
		return printf("\n%.4f / %.4f = %.4f", num_1st, num_2nd, resault);
		break;

	case '*':
		resault = num_1st * num_2nd;
		return printf("\n%.4f * %.4f = %.4f", num_1st, num_2nd, resault);
		break;

	default:
		return printf("Invalid Operation");

	}
	return 0;
}
