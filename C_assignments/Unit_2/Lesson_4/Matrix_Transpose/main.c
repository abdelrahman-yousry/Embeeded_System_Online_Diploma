#include <stdio.h>
#include <stdlib.h>
//C_Program_to_find_the_transpose_numbers_of_matrix
int main(void)
{
	int matrix [10][10];
	int transpose[10][10];
	int i,j,r,c,f,k ;

	printf("Enter rows and coulumns of the matrix \n");

	scanf("%d %d",&r,&c);


	for(i=0;i<r;i++)
	{
		printf("Enter the elements of the row %d  :\n",i);
		for (j=0;j<c;j++)
		{
			printf ("\t");

			scanf("%d",&matrix[i][j]);
		}
	}

	printf("\nEntered matrix:\n");
	for(i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("%d ",matrix[i][j]);
			if (j==c-1)  //this is the second row of the matrix
			{
				printf("\n\n");
			}

		}
	}

	for(f=0;f<r;f++)
	{
		for (k=0;k<c;k++)
		{
			transpose[k][f]=matrix[f][k];   // transpose is done by inversing i and j of the transpose array

		}
	}
	printf("\nTranspose matrix:\n");
	for(k=0;k<r;k++)
	{
		for (f=0;f<c;f++)
		{
			printf("%d ",transpose[k][f]);
			if (f==c-1)  //this is the second row of the matrix
			{
                printf("\n\n");
			}

		}
	}

	return 0;
}
