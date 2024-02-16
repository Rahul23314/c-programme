// scan an array by using modularity by using compile time memory print addition in main()
#include<stdio.h>  
void scanArray(int *p,int n);    // Don't Forgot to print the function declartion 
int add(int *p,int n); 
int main()
{
	int num[8]; 
	int x;
	scanArray(num,8);
	x=add(num,8); 
	printf(" Addition is %d",x);
}  
void scanArray(int *p,int n)
{
	int i;
	for(i=0;i<=n-1;i++) 
	{
		scanf("%d",(p+i));
	}
}  
int add(int *p,int n)
{
	int i,sum=0;
	for(i=0;i<=n-1;i++)
	{
		sum=sum+*(p+i);
	} 
	return sum;
}

