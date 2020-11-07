/*
 * main.c
 *
 *  Created on: Nov 3, 2020
 *      Author: 20111
 */

#include <stdio.h>

//C_Program_to_Get_factorial_num
int main(void)
{
	int n ,i ,fact=1;
	printf("Enter an integer:");
	fflush(stdout);
	scanf("%d",&n);
	if (n<=0)
	{
		printf("no fact is exist");
	}
	else
	{

	for (i=n;i>0;i--)
	{
		fact*=i;
	}
	printf("fact = %d",fact);
	}
}
