#include<stdio.h>  
void myfun(int x);
int main()
{
	myfun(1);
} 
void myfun(int x)
{
	if(x==21) 
	{
		return ;
	} 
	else 
	{
		if(x%2!=0)
		{
			printf("\n%d is odd",x);
	}
		myfun(x+1);
	}
}
