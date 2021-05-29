#include <stdio.h>
#include <stdlib.h>

/*Var Declaration */
struct complex_s{
    float real ;
    float imaginary ;
}complex1 , complex2 ,result;

/*Functions Prototype*/
/*For Getting the data from the user and printing them */

/*This function return struct contain distance in real and imaginary */
void Get_Complex(float *ptr1, float *ptr2);

void Print_Sum_Of_Complex(struct complex_s complex1,struct complex_s complex_s);

/*Main function*/

int main()
{
   static int count;
   count++;
   Get_Complex(&complex1.real,&complex1.imaginary);
   Get_Complex(&complex2.real,&complex2.imaginary);
   Print_Sum_Of_Complex(complex1,complex2);
   return 0;
}


void Get_Complex(float *ptr1, float *ptr2)
{
    static int count;
	count++;
	printf("For %dst complex: \n",count);
	printf("Enter real and imaginary respectively: \n");
	scanf("%f",ptr1);
	scanf("%f",ptr2);
}

void Print_Sum_Of_Complex(struct complex_s complex1,struct complex_s complex2)
{
    result.real = complex1.real+complex2.real ;
    result.imaginary = complex1.imaginary+complex2.imaginary ;

    printf("Sum of two distance= %f + %f",result.real , result.imaginary);


}



