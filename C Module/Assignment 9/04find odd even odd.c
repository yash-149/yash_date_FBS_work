//Find odd and even among the numbers.
#include<stdio.h>
void evenodd(int []);
void main()
{
	int arr[5]={1,2,3,4,5};
	evenodd(arr);
	
}
// start 
void evenodd(int arr[])
{
	
	printf("even number in this array\n");
	for(int i=0;i<5;i++){
		if(arr[i]%2==0){
			printf("%d ",arr[i]);
		}
	}
	printf("\nodd number in this array\n");
	for(int i=0;i<5;i++){
		if(arr[i]%2!=0){
			printf("%d ",arr[i]);
		}
	}
}