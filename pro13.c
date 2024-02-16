#include<stdio.h> 
int addition(int num1,int num2); 
int subtraction(int num1,int num2);
int main()
{
	int num1,num2,x,y;
	printf("Enter the two numbers=");
	scanf("%d%d",&num1,&num2);
	x=addition(num1,num2);
	y=subtraction(num1,num2); 
	printf("The addition,subtraction of the %d and %d is %d,%d",num1,num2,x,y);
	
} 
int addition(int num1,int num2)
{
	return num1+num2;
} 
int subtraction(int num1,int num2)
{
	return num1-num2;
} 
