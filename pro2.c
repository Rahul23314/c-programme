#include<stdio.h> 
void myfun();
int main()
{ 
	myfun();
	myfun();
} 
void myfun()
{
	static int x=1;
	x=x+1;
	printf("%d",x);
}
