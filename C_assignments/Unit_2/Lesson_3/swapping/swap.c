/*
 * swap.c
 *
 *  Created on: Nov 2, 2020
 *      Author: 20111
 */

#include <stdio.h>

//C_Program_find_ascii_of_a_character:
int main(void)
{
	int a,b,z;

	printf("Enter value of a:\n"); /* prints Enter a value*/
	fflush (stdout);
	scanf (" %d",&a); // we have to leave space before scanf and not to leave space after it
	printf("Enter value of b:\n");
	fflush (stdout);
	scanf (" %d",&b);

	z=a;
	a=b;
	b=z;
	printf("After swapping, value of a : %d\n",a);
	printf("After swapping, value of b : %d\n",b);
	return 0 ;
}
