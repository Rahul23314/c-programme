#include<stdio.h>
int main()
{
	float arr[6]; 
	float sum;
	scanArray(arr,6);
	sum=addition(arr,6);
	printArray(arr,6);
	
} 
void scanArray(float *p,int n)
{
	int i;
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",p+i);
	}
} 
float addition (int *p,int n)
