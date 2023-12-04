#include<stdio.h>
int main()
{
	int p,t,r,si;
	printf("Enter the value of principal amount p:");
	scanf("%d",&p);
	printf("Enter the value of time  t:");
	scanf("%d",&t);
	printf("Enter the value of interest rate r:");
	scanf("%d",&r);
	si=(p*t*r)/100;
	printf("Simple interest =%d",si);
	return 0;
}
