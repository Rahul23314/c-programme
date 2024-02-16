#include<stdio.h> 
void myfun(int x);
int main()
{
	myfun(20);
} 
void myfun(int x) 
{
	if(x==10) 
	{
	return;	
	} 
	else 
	{
		
		myfun(x-1);
		printf("\n%d",x);    // on the back tracing the ans will be on the decending order
	}
} 
