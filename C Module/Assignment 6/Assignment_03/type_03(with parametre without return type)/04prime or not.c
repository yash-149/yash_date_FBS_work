//Check the given number is prime or not.
//Input: n = 7
//Output: Prime

#include<stdio.h>
void primrnotprime(int,int,int);
void main()
{
	int no,flag=0,i=2;
	printf("enter a number :");
	scanf("%d",&no);
	primrnotprime(no,flag,i);
}
// start 
void primrnotprime(int no,int flag,int i)
{
	
	while(i<=no/2)
	{
		if(no%i==0){
		flag=1;
		break;
		}
		i++;
	}
	if(flag==0){
		printf("number is prime");
	}
	else
	{
		printf("number is not prime");
	}
}