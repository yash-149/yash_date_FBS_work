//Accept three sides of a triangle from the user and determine whether the triangle is equilateral, isosceles, or scalene.
#include<stdio.h>
void findtriangle(int*,int*,int*);
void main()
{
	int a,b,c;
	printf("Enter a first side: ");
	scanf("%d",&a);
	printf("Enter a first second: ");
	scanf("%d",&b);
	printf("Enter a first third=:");
	scanf("%d",&c);
	 findtriangle(&a,&b,&c);
}
// start 
void findtriangle(int* a,int* b,int* c)
{
	

	if(*a==*b&&*b==*c) 
	{
		printf("equilateral");
    }
    else
    {
    	if(*a==*b || *b==*c || *c==*a)
    	{
    		printf(" triangle");
		}
		else
		{
			printf("scalene");
		}
	}

}