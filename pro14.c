#include<stdio.h> 
void  area(int rad); 
void circum(int rad);
int main()
{
	int rad;
	printf("Enter the radius of the circle=");
	scanf("%d",&rad);
	area(rad);
	circum(rad);
} 
void  area(int rad)
{
	float ans;
	ans=3.14*rad*rad;
	printf("The area of the circle is %f",ans);
} 
void circum(int rad)
{
	float ans;
	ans=3.14*2*rad;
	printf("The circumference of the circle is %f",ans);
}
