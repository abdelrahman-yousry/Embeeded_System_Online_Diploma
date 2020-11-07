/*
 * Multiply.c
 *
 *  Created on: Nov 2, 2020
 *      Author: 20111
 */

#include <stdio.h>

//C_Program_to_multiply_Two_floats
int main(void)
{
	float x,y, multiply ;
	printf("Enter two numbers:\n"); /* prints Enter an integer */
	fflush (stdout);
	scanf ("%f \n %f",&x,&y);
	multiply=x*y;
	printf("product :%f \n",multiply);
	return 0 ;
}
