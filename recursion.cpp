#include<stdio.h> 
void myfun();
int main()
{ myfun();

} 
void myfun()
{
	int x=1;
	printf("Hello");
	myfun();
}
