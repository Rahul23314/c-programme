#include<stdio.h> 
void myfun(int x);
int main()
{
	myfun(11);
}
void myfun(int x)
{
	if(x==21)
	{ 
	 return;
	} 
	else
	{  
	printf("\n%d",x);     // during the recursion 
	myfun(x+1);
		
	}
}
