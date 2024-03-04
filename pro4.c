#include<stdio.h>
int main()
{
	int num[]={3,87,94,54,79};
	int *p; 
	int i;
	p=&num[0];  
	for(i=0;i<=4;i++) 
	{
		printf("%d",*(p+i));
	}
	
	
}
