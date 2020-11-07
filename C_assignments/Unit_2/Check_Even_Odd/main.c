/*
 * main.c
 *
 *  Created on: Nov 3, 2020
 *      Author: 20111
 */

#include <stdio.h>

//C_Program_Check_Even_Odd
int main(void)
{
	int x ;
	printf("Enter an integer you want to check:");
	fflush(stdout);
	scanf("%d",&x);
	if(x%2==0)    // checking whether the reminder is 0 or not
	{
		printf("%d is even",x); // even if the reminder = 0
	}
	else
	{
		printf("%d is odd",x); // odd if the reminder not equal 0
	}
}
