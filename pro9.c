#include<stdio.h> 
void myfun(int min,int max );
int main()
{
	int num1,num2,max,min;
	printf("Enter the two numbers =");
	scanf("%d%d",&num1,&num2);
	if(num1>num2)
	{
		max=num1;
		min=num2;
	} 
	else 
	{
		max=num2;
		min=num1;
	} 
	myfun(min,max);
} 
void myfun(int min,int max )
{
	if(min>max)
	{
		return;
	} 
	else
	{
	  if(min%2!=0)	
	  {
	  	printf("\n%d",min);
	  } 
	  myfun(min+1,max);
	}
}
