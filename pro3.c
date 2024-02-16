#include<stdio.h>
int main()
{
	int num[6]={47,10,87,98,65,7}; 
	int i,flag=0;
	printf("Enter the number=");
	for(i=0;i<=5;i++) 
	{
		if(num[i]==10)
		{
			printf("\narray contains 10");  
			flag=1;
			break; 
			
		} 
	
	} 
	if (flag==0)
	{
		printf("Arrays not continng 10");
	}
}
