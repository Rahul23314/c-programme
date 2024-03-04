#include<stdio.h>
void addition (int a,int b);
int main()
{
	int a,b;
	a=3;
	b=5;
	addition(a,b);
} 
void addition(int a,int b)
{
	int add;
	add=a+b;
	printf("The addition is %d",add);
}
