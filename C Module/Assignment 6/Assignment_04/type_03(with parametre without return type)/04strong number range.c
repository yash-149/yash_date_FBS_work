//Print strong numbers in the given range 1 to n

#include<stdio.h>
void stronginrange(int);
void main()
{
	int no;
	printf("enter a number : ");
	scanf("%d",&no);
	stronginrange(no);
}
// start 
void stronginrange(int no)

{
	
	for(int k=1;k<=no;k++){
		
	
	int num=k,rem,sum=0;

	int temp=num;
	
		
	while(num>0){
		int fact = 1;
		rem=num%10;
		for(int i=1;i<=rem;i++)
		fact=fact*i;
		sum=sum+fact;
		num=num/10;
	
	}
	if(temp==sum){
		printf(" strong number:%d \n",temp);
	}
	
}

}