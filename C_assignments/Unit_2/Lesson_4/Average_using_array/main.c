/*
 * main.c
 *
 *  Created on: Nov 7, 2020
 *      Author: 20111
 */

#include <stdio.h>

//C_Program_to_find_average_of_an_array
int main(void)
{
	char n=0  ;
	char i ;
	float sum = 0.0 ;
	float average ;
	int num[100];
	printf("Enter the numbers of no of array's element \n");
	fflush (stdout);
	scanf ("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("%d. Enter the element %d of the array\n",i+1,i+1);
		fflush (stdin);
		fflush (stdout);
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
		sum +=num[i];
	}
	average = sum/n;
	printf ("average=%.2f",average);
	return 0 ;
}

// 25od bali 2n b3d scanf mynf34 27ot 2y 7aga
