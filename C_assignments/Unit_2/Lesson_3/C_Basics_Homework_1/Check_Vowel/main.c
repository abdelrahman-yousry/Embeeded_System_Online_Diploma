/*
 * main.c
 *
 *  Created on: Nov 3, 2020
 *      Author: 20111
 */


#include <stdio.h>

//C_Program_Check_Vowels
int main(void)
{
	char c ;
	printf("Enter an alphapet :");
	fflush(stdout);
	scanf("%c",&c);
	switch (c)
	{
	case 'a':
	case 'i':
	case 'u':
	case 'v':
	case 'e':
		printf("%c is vowel",c);
		break ;
	default :
		printf("%c is consonat",c);
		break ;
	}

}
