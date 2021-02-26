/*
 * main.c
 *
 *  Created on: Nov 7, 2020
 *      Author: 20111
 */

#include <stdio.h>
#include <string.h>
//C_Program_to_find_length_of_string

int main (void)
{
	char str [500];
	char temp;
	char x ;
	int i=0 ;

	printf("Enter a string :\n");
	fflush (stdout);
	gets (str);

	x=strlen(str)-1;

	while (i<x)
	{

		temp=str[i] ;
		str[i]=str[x];
		str[x]=temp ;

		i++ ;
		x-- ;


	}

	printf("\nReverse string is : \n %s",str);

	return 0 ;
}
