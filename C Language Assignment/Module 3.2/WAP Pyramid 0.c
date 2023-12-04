#include<stdio.h>
int main()
{
	char i,j,count=65;
	for(i=65;i<=69;i++)
	{
		for(j=65;j<=i;j++)
		{
			printf("%c",count);
			++count;
		}
			printf("\n");
	}
		return 0;
}
