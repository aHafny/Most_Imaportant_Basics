/*
 ============================================================================
 Name        : alphabet_checker.c
 Author      : Ahmed Mahmoud Hafny
 Version     : 1.01
 Description : a C Function that takes one character and checks if it alphabet or not.
 ============================================================================
 */
/********************************      Macros Section               *****************************************/
#define TRUE 1
#define FALSE 0

/********************************      Functions Declaration (Prototype) Section     *****************************************/
char alpha_check(char alpha);

/********************************      Header Files              *****************************************/
#include <stdio.h>

/********************************      Main Section     *****************************************/
int main(void) {

	char chrachter;                     //
	printf("Insert a Digit :");
	scanf("%c", &chrachter); //store the input as an ASCII to know if the input is char as the chars has special ASCII's

	char check_resault = alpha_check(chrachter);

	if ( TRUE == check_resault) { //Check if the Return of Function is true ,means the input is char
		printf("the Input is a Character");
	} else {      				//is its not true (false) ,then its not a char
		printf("the Input is NOT a Character");
	}

	return 0;
}

/********************************      Functions Section     *****************************************/
char alpha_check(char alpha) {

	if (alpha > 64 && alpha < 123) { // This is the Range of All Alphabets in ASCII Table
		return TRUE;
	}
	return FALSE;

}
