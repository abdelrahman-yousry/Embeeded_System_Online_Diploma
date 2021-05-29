#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define area(radius) (PI*radius*radius)
int main(void)
{

	float radius;
	printf("Enter the radius: ");
	scanf("%f",&radius);
	printf("Area = %.2f",area(radius));
	return 0;
}
