#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
//C_Program_to_search_on_an_element_in_array
int main(void)
{
	int n,i,element;
	int num[30];
	printf("enter the no of the elements: ");
	fflush (stdout);
	fflush (stdin);
	scanf ("%d",&n);


	for(i=0;i<n;i++)
	{
		printf("element no %d: ",i+1);
		fflush (stdout);
		scanf("%d",&num[i]); // mynf34 27ot space b3d scanf b3d 2l %d
	}

	for (i=0;i<n;i++)
	{
		printf("%d \t",num[i]);
	}




	printf("\n Enter the element to be searched:\n");
	fflush (stdout);
	fflush (stdin);
	scanf("%d",&element);

	i=0;
	while(i<n && element!=num[i])
		{
			i++;
		}

	if (i<n)
	{
		printf("\n number found at location : %d \n",i+1);
	}
	else
	{
		printf("\n number not found"  );
	}
}


