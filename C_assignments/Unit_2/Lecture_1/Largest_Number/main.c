/*
 * main.c
 *
 *  Created on: Nov 3, 2020
 *      Author: 20111
 */

#include <stdio.h>

//C_Program_to_Get_Largest_number
int main(void)
{
	float x,y,z;
	printf("Enter Three Numbers:");
	fflush(stdout);
	scanf("%f%f%f",&x,&y,&z);
	if (x>y&&x>z)
	{
		printf("Largest number =%f",x);
	}
	else if(y>x&&y>z)
	{
		printf("Largest number =%f",y);
	}
	else
	{
		printf("Largest number =%f",z);
	}
}
