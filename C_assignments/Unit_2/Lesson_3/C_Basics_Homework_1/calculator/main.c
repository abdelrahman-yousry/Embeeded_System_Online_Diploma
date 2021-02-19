/*
 * main.c
 *
 *  Created on: Nov 3, 2020
 *      Author: 20111
 */


#include <stdio.h>

//C_calculator_Program
int main(void)
{
	char op ;
	float op1,op2 ;
	float result;
	printf("Enter operators:");
	fflush(stdout);
	scanf("%c",&op);
	printf("Enter two operands:");
	fflush(stdout);
	scanf("%f %f",&op1,&op2);

	switch (op)
	{
	case '+':
		result=op1+op2 ;
		printf("%.2f + %.2f = %.2f",op1,op2,result);
		break ;
	case '-':
		result=op1-op2 ;
		printf("%.2f - %.2f = %.2f",op1,op2,result);
		break ;
	case '*':
		result=op1*op2 ;
		printf("%.2f * %.2f = %.2f",op1,op2,result);
		break ;
	case '/':
		result=op1/op2 ;
		printf("%.2f / %.2f = %.2f",op1,op2,result);
		break ;


	}
}
