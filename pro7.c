#include<stdio.h> 
myfun(int x);
int main()
{
	myfun(1);
} 
myfun(int x)
{
	if(x==21) 
	{
		return ;
	} 
	else
	{
		if(x%2==0)
		{
			printf("\n%d",x); 
		}  
		myfun(x+1);
		
	}
}
