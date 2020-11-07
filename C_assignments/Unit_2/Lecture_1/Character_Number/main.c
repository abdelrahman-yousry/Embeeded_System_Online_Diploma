/*
 * main.c
 *
 *  Created on: Nov 2, 2020
 *      Author: 20111
 */


#include <stdio.h>

//C_Program_find_ascii_of_a_character:
int main(void)
{
	char x;
	printf("Enter a character:\n"); /* prints Enter a character */
	fflush (stdout);
	scanf ("%c ",&x);
	printf("ASCII value of %c = %d\n",x,x);
	return 0 ;
}
