// WAP to reverse the string
#include<stdio.h>
int main()
{
	char str[100];
	printf("Enter a string:");
	gets(str);
	strrev(str);
	printf("\nReversed String is:%s",str);
	return 0;
}
