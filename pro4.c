// o/p-1,2,3,4,5
#include<stdio.h> 
void myfun(int x);
int main()
{
	myfun(1);
} 
void myfun(int x)
{
	if(x<6)
	{     printf("%d",x); 
	     myfun(x+1);
	
	} 
	else
	{
	 return ;
	}
}
