//Write a program to check given 3 digit number is pallindrome or not.

#include<stdio.h>
void pallindrom(int*);
void main()
{
	int num;
	printf("enter a number : ");
	scanf("%d",&num);
	pallindrom(&num);
	
}

// start 
void pallindrom(int* num)
{
	int r1,r2,r3,q1;
	r1=*num%10;
	q1=*num/10;
	r2=q1%10;
	r3=q1/10;
	if(r1==r3)
	{
		printf("number is pallindrome");
	}
	else
	{
		printf("number is not pallindrome");
	}
}