#include<stdio.h>
int main()
{
	int n,sum=0,r;
	printf("Enter any Number:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("Sum of digits:%d",sum);
	return 0;
}