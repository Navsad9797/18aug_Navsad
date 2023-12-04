#include<stdio.h>
int main()
{
	int i,f=1,no;
	printf("Input the number:");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	f=f*i;
	printf("the factorial of %d is:%d\n",no,f);
	return 0;
}
