#include<stdio.h>  
float ans(int rad);
float san(int rad);
int main()
{
	int rad; 
	float ans,san;
	printf("Enter the radius of the circle ");
	scanf("%d",&rad);
	ans=area(rad);
	san=circum(rad);
	printf("The area of the circle & circumference is %f",ans,san);
} 
float ans(int rad)
{
	return 3.14*rad*rad;
} 
float san(int rad)
{
	return 3.14*rad*2;
} 
