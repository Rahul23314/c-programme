// parameters passing by value is not profitable because only one elemnt accesible at a time.
// parameters passing of array to function is by address 
#include<stdio.h> 
void addition(int x);
int main()
{
	int num[4]={6,3,8,7};
	int i;
	for(i=0;i<=3;i++)
	{
		addition(num[i]);
	}  
}
	void addition(int x)
	{
		int sum=0;
		sum=sum+x;
		printf("%d",sum);
	}

