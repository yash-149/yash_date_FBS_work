#include<stdio.h>
void main()
{
	int u,tu;
	printf("enter the units : ");
	scanf("%d",&u);
	if(u>=50)
	tu=u*30;
		else
		tu=u*40;	
	
	if(u>150)
		tu=u*40;
		else
		tu=u*50;
	printf("%d",tu);
}