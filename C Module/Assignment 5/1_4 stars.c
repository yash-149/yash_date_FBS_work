//1. Print a solid square pattern
//Input: n = 4
//Output:
//
//* * * *
//* * * *
//* * * *
//* * * *
#include<stdio.h>
void main()
{ int i=1,j=1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		printf("* ");
		printf("  \n");
	}
}