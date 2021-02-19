/*
 * scanf.c
 *
 *  Created on: Oct 19, 2020
 *      Author: 20111
 */


#include <stdio.h>


int main(void)
{
	int x ;
	printf("Enter an integer:\n"); /* prints Enter an integer */
	fflush (stdout);
	scanf ("%d",&x);
	printf("You entered:%d \n",x);
	return 0 ;
}

