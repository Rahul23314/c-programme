#include<stdio.h> 
void myfun(int x);
int main()
{
	printf("Main Starts");
	myfun(1);
	printf("\nMain Ends");
} 
void myfun(int x)
{
	if(x<=3)
	{
		myfun(x+1);
		printf("\nAfter",x);
	}
}
