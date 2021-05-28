#include <stdio.h>
#include <stdlib.h>


int Power_Num(int base, int exp);
int main()
{
    int base, exp, result;
    printf("Enter base number: ");
    scanf("%d",&base);
    printf("Enter the power number(should be positive): ");
    scanf("%d",&exp);
    printf("%d \n",exp);
    result= Power_Num(base,exp);
    printf("%d^%d=%d",base,exp,result);
    return 0;
}
int Power_Num(int base, int exp)
 {
     if (exp != 0)
        return base*(Power_Num(base,exp-1)) ;
     else
        return 1 ;
 }



// This Another algorithm for the same Function without using recursion

//int Power_Num(int base, int exp);
//int main()
//{
//    int base,exp;
//    float result;
//    printf("Enter base number: ");
//    scanf("%d",&base);
//    printf("Enter the power number(should be positive): ");
//    scanf("%d",&exp);
//    printf("%d \n",exp);
//    result= Power_Num(base,exp);
//    printf("%d^%d=%f",base,exp,result);
//    return 0;
//}
//int Power_Num(int base, int exp)
// {
//    if (exp > 0)
//    {
// int result=base,i ;
//    for ( i=1;i<exp;i++)
//        {
//            result*=base ;
//        }
//        return result ;
//    }
//    else if (exp<0)
//    { //printf ("%d \n", base);
////        printf("%d \n",exp);
//        float result=base;
//        printf ("%f \n", result);
//        int i ;
//        for ( i=1;i<-exp;i++)
//        {
//            result*=base ;
//        }
//        printf ("%f \n", result);
//        return 1.0/result ;
//    }
//    else
//    {
//       return 1 ;
//    }
//}
