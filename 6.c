#include<stdio.h>  
void print(int a,int b);
int main()
{
	print(5,10);
	
} 
void print(int a,int b)
{
	if(a==b)
	{
		return ;
	} 
	else
	{
		printf("%d\n",a);
		print(a+1,b);
	}
}
