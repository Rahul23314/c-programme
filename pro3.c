#include<stdio.h>
int rad; 
void area(); 
void circum();
int main()
{   printf("Enter the radius of the circle=");
	scanf("%d",&rad); 
	area();
	circum();
} 
void area()
{
	float area; 
	area=rad*3.14*rad;
	printf("The area of the circle is %f",area);
}
void circum()
{
	float circum; 
   circum=rad*3.14*2;
	printf("\nThe area of the circle is %f",circum);
}
