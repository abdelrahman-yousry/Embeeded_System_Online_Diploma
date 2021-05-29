#include <stdio.h>
#include <stdlib.h>

/*Var Declaration */
struct distance_s{
    int feet ;
    float inch ;

}distance1, distance2, result;

/*Functions Prototype*/
/*For Getting the data from the user and printing them */

/*This function return struct contain distance in inch and feet*/
void Get_Distance(int *ptr1, float *ptr2);

struct distance_s Print_Sum_Of_Distance(struct distance_s distance1,struct distance_s distance2);

/*Main function*/

int main()
{
   static int count;
   count++;
   Get_Distance(&distance1.feet,&distance1.inch);
   Get_Distance(&distance2.feet,&distance2.inch);
   Print_Sum_Of_Distance(distance1,distance2);
   return 0;
}


void Get_Distance(int *ptr1, float *ptr2)
{
    static int count;
	count++;
	printf("Enter information for distance %d: \n",count);
	printf("Enter feet: ");
	scanf("%d",ptr1);

	printf("Enter inch: ");
	scanf("%f",ptr2);
}

struct distance_s Print_Sum_Of_Distance(struct distance_s distance1,struct distance_s distance2)
{
    result.feet = distance1.feet+distance2.feet ;
    result.inch = distance1.inch+distance2.inch ;

    printf("Sum of two distance= %d , %.2f",result.feet , result.inch);

    return result ;
}




