#include<stdio.h> 
void myfun(int x);
int main()
{
	printf("Main starts");
	myfun(1);
	printf("\nMain Ends");
	
} 
void myfun(int x)
{
	if(x<=3) 
	{
		myfun(x+1);
	}
}

