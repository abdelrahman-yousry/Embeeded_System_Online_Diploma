/*
 * main.c
 *
 *  Created on: Nov 7, 2020
 *      Author: 20111
 */

#include <stdio.h>

//C_Program_to_insert_element_in_array
int main(void)
{

	char n,i,element,location;
	char num[30];
	printf("enter no of the elements: ");
	fflush (stdout);
	fflush (stdin);
	scanf ("%d",&n); // Don't put space after %d in scanf
	for(i=0;i<n;i++)
	{
		printf("element no %d: ",i+1);
		fflush (stdout);
		scanf("%d",&num[i]);
	}

	for (i=0;i<n;i++)
	{
		printf("%d \t",num[i]);

	}
	printf("%d \t",n);
	printf("\n Enter the element to be inserted: \n");
	fflush (stdout);
	fflush (stdin);
	scanf("%d",&element);


	printf("\n Enter the location: \n");
	fflush (stdout);
	fflush (stdin);
	scanf("%d",&location);


//	for (i=n;i<=location;i--)
//	{
//		num[i]=num[i-1];
//	}
	num[location-1]=element;

	for (i=0;i<=n;i++)
	{

		printf("%d \n",num[i]);

	}


}

// feh mo4kla 2n 2l n btt8ayar lw7daha w btb2a zero
// 2n 2l inseted element byb2a zero m4 2l kema 2lli 2na 7ttha
