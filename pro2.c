#include<stdio.h>
int main()
{   int rad,*prad,**pprad; 
   prad=&rad;
   pprad=&prad;
	printf("Enter the radius");
	scanf("%d",&**pprad);
	double*area;
	area=3.14*(*prad)*(*prad));
	printf("The area of the circle is %l",area);
	return 0;
	
}
