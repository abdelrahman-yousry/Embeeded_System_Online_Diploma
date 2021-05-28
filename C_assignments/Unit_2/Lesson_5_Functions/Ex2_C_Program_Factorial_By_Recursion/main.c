#include <stdio.h>
#include <stdlib.h>

int factorial(int num);

int main()
{
    int n;
    printf("Enter a positive integer:\n");
    scanf("%d",&n);

    printf("factorial of num %d is %d \n",n,factorial(n));
    return 0;
}
int factorial(int num)
{
    if(num!=1)
    {

      return  num*factorial(num-1);
    }

}
