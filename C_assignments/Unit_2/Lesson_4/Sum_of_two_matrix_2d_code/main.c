#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

//C_Program_to_find_sum_of_two_matrices_entered by the user
int main(void)
{
	int i=0  ;
	int j=0  ;
	int sum [10][10];
	int matrix1 [10][10];
	int matrix2 [10][10];
	int  r=0;
	int  c=0;
//	float sum	  [2][2] ;
//	float matrix1 [2][2]={{5,6},{7,8}} ;
//	float matrix2 [2][2]={{1,2},{3,4}};
	printf("Enter the no of the elements of the 1st matrix \n");
	printf("no of rows \n");
    scanf ("%d",&r);
	printf("no of column\n");
	scanf ("%d",&c);
	printf("Enter the element of the 1st matrix \n");
	for (i=0;i<r;i++)
	{

		//printf("Enter the element of the %d row \n",i+1);

		for (j=0;j<c;j++)
		{
			scanf ("%d",&matrix1[i][j]);

			if (c==j+1)
			{
				printf("\n \n");
			}
		}
	}
    printf("%d \n",matrix1[0][0]);
    printf("%d \n",matrix1[0][1]);
    printf("%d \n",matrix1[0][2]);
	printf("Enter the element of the 2nd matrix \n");

	for (i=0;i<r;i++)
	{

		//printf("Enter the element of the %d row \n",i+1);

		for (j=0;j<c;j++)
		{
			scanf ("%d",&matrix1[i][j]);
			if (c==j+1)
			{
				printf("\n \n");
			}
		}
	}
    printf("%d \n",matrix1[0][0]);
    printf("%d \n",matrix1[0][1]);
    printf("%d \n",matrix1[0][2]);
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
		    //printf("sum of [%d%d] = matrix1[%d%d] + matrix2[%d%d] \n",i,j,i,j,i,j);
		    sum[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d",sum[i][j]);
            if (c==j+1)
			{
				printf("\n \n");
			}
		}
	}
	printf("%d \n",matrix1[0][0]);
	printf("%d \n",matrix2[0][0]);
	printf("%d \n",sum[0][0]);
    printf("The sum of the two matrix \n");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("%d \t",sum[i][j]);
            if (c==j+1)
			{
				printf("\n \n");
			}

		}
	}
	return 0 ;
}
