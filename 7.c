#include<stdio.h> 
void myfun(int x);
int main()
{
	myfun(1);
} 
void myfun(int x)
{
	if(x==5)
	{
		printf("%d",x);
		myfun(x+1);
	} 
	else 
	{
		return ;
	}
}
