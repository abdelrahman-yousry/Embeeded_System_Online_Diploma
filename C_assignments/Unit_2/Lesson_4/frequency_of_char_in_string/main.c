

#include <stdio.h>
#include <string.h>
//C_Program_to_find_frequency_in_string

int main (void)
{
	char str [500];
	char ch ;
	int i ;
	int count=0;
	printf("Enter a string :");
	gets(str);
	printf("\nEnter a character to find frequency: ");

	scanf("%c",&ch);
	for (i=0;str[i]!='\0';i++)
	{
		if (ch== str[i])
		{
			count++;
		}

	}

	printf("\nfrequency of %c = %d ",ch,count);
	return 0 ;
}


