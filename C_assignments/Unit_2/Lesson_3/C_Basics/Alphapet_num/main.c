/*
 * main.c
 *
 *  Created on: Nov 3, 2020
 *      Author: 20111
 */
#include <stdio.h>

//C_Program_to_Get_alphapet_number
int main(void)
{
	char alphapet;
	printf("Enter a character");
	fflush(stdout);
	scanf("%c",&alphapet);
	if ((alphapet>='a' && alphapet<='z')||(alphapet>='A' && alphapet<='Z'))
	{
		printf("%c is alphapet",alphapet);
	}
	else
	{
		printf("%c is not alphapet",alphapet);

	}

}


