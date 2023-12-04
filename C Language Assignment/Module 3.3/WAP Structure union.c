#include<stdio.h>
struct employe
{
	
	int id;
	char name[50];
}st;
int main()
{
	printf("enter id:");
	scanf("%d",&st.id);
	printf("enter your name:");
	scanf("%s",&st.name);
	printf("\n");
	printf("id=%d\name=%s",st.id,st.name);
	return 0;
}
