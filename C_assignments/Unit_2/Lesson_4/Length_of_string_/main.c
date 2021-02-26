#include <stdio.h>
#include <stdlib.h>
//C_Program_to_find_length_of_string

int main (void)
{
	char str [500];
	char ch ;
	int i ;
	int count=0;
	printf("Enter a string :\n");
	fflush (stdout);
	gets (str);

	for (i=0;str[i]!='\0';i++);


	printf("\nlength of string = %d ",i);
	return 0 ;
}
