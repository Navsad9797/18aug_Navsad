#include<stdio.h>
int main()
{
	int num1,num2,max;
	printf("enter number:");
	scanf("%d",&num1);
	printf("enter number:");
	scanf("%d",&num2);
	if(num1>num2)
	{
		printf("maximum number is:%d\n",num1);
	}
	else
	{
		printf("maximum number is:%d\n",num2);
	}
	return 0;
}
