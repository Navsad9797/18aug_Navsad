#include<stdio.h>
int main()
{
	int year,days;
	printf("enter the days:");
	scanf("%d",&days);
	year=days/365;
	days=days%365;
	printf("year=%d",year);
	return 0;
}
