/*
 * main.c
 *
 *  Created on: Nov 3, 2020
 *      Author: 20111
 */


#include <stdio.h>

//C_Program_to_Get_neg_pos_number
int main(void)
{
	float num;
	printf("Enter The Number:");
	fflush(stdout);
	scanf("%f",&num);

	if (num<0)
	{
		printf("%.3f is negative number",num);
	}
	else if (num >0)
	{
		printf("%.3f is positive number",num);
	}
	else
	{
		printf("%.3f is equal zero",num);
	}
}

