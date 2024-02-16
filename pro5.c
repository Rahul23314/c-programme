#include<stdio.h> 
void myfun(int n);
int main()
{
	myfun(11);
} 
void myfun(int n)
{
  if(n==21)	 
  {
  	return ;
  } 
  else
  {
  	myfun(n+1);
  	printf("\n%d",n);
  }
}
