/*
 ============================================================================
 Name        : heater_operation.c
 Author      : Ahmed Mahmoud Hafny
 Version     : 1.0
 Description : a program that calculates a heating time by taking the temperature using function
 ============================================================================
 */

#include <stdio.h>
unsigned long calc_time(float temp);

int main(void) {


	 float temperature ;
	 printf("Enter the Temp:");
	 fflush(stdout);
	 scanf("%f",&temperature);

	 unsigned long h_Time;

	 h_Time =calc_time(temperature);
	 printf("The Heating Time Is %lu",h_Time);


}
unsigned long calc_time(float temp)
{

	unsigned long heating_time ;

	if ( temp >0 &&temp <30 ){
		heating_time=7;
	}

	else if ( temp >30 &&temp <60  ){
			heating_time=5;
		}


	else if ( temp >60 &&temp <90  ){
			heating_time=3;
		}
	else if ( temp >90 &&temp <100  ){
				heating_time=1;
			}
	else {
		return 0;
	}

	return heating_time;
}
