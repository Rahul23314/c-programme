#include<stdio.h> 
void myfun(int x);
int main() 
{
	myfun(1);
	
}
void myfun(int x) 
{
	if(x<=10)
	{
		printf("%d\n",x); 
		x++; 
		myfun(x+1);
		printf("\n%d",x);
	}
}
