/*
 * main.c
 *
 *  Created on: Nov 3, 2020
 *      Author: 20111
 */

#include <stdio.h>

//C_Program_to_Get_sum_of_natural_number
int main(void)
{
	int n , count, sum= 0 ;
	printf("Enter an integer");
	fflush(stdout);
	scanf("%d",&n);

	count = 0;
			while(count<=n)
			{
				sum+=count;
				count ++ ;
			}
	printf("sum = %d",sum);
}
