#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*p,i; 
	int count=0;
	printf("Enter your integers=");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",(p+i));
		
	} 
	for(i=0;i<=n-1;i++)
	{
		if(*(p+i)%2==1)
		{
			count++;
		}
	} 
	printf("Total no. of odd numbers are %d",count);
}
