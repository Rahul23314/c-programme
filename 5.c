#include<stdio.h> 
void display(int x);
int main()
{
	display(1);
} 
void display(int x)
{
	if(x==5)
	{
		 return;
	} 
	else 
	{
		printf("%d\n",x);
		display(x+1);
		printf("\n%d",x);
	}
}
