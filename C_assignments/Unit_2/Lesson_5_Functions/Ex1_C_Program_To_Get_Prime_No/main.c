#include <stdio.h>
#include <stdlib.h>

#Ex1 C Program To Get Prime No Within Interval Entetred By The User Using Function

int Get_prime(int num);
int main(void)
{
    int x1,x2,i,flag ;
    printf("Enter the Intervals:\n");
    scanf("%d %d",&x1,&x2);
    printf("The prime no between %d and %d are : ",x1,x2);

    for(i=x1+1;i<x2;i++)
    {

        flag=Get_prime(i);
        if(flag==0)
        {
            printf("%d \n",i);
        }
    }
    return 0;
}
int Get_prime(int num)
{

    int j,flag =0 ;
    for (j=2;j<=num/2;j++)
    {
        if(num%j==0)
        {

            flag=1;
            break ;
        }
    }
    return flag ;
}
