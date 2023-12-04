// WAP to find area of cicrle
#include<stdio.h>
int main()
{
	float radius,area;
	float pi=3.14;
	printf("Enter the radius of the circle:");
	scanf("%f",&radius);
	area=pi*radius*radius;
	printf("The area of the circle is %f",area);
	return 0;
}
