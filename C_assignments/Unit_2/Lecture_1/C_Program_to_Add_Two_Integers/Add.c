/*
 * Add.c
 *
 *  Created on: Oct 21, 2020
 *      Author: 20111
 */

#include <stdio.h>

//C_Program_to_Add_Two_Integers
int main(void)
{
	int x,y, sum ;
	printf("Enter two integers:\n"); /* prints Enter an integer */
	fflush (stdout);
	scanf ("%d \n %d",&x,&y);
	sum=x+y;
	printf("sum :%d \n",sum);
	return 0 ;
}
