//3. Print an inverted right-angled triangle pattern
//Input: n = 5
//Output:
//
//*****
//****
//***
//**
//*
#include<stdio.h>
void main()
{
		int i=1,j=1;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
			printf(" *");
		printf("  \n");
	}
}