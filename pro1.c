#include<stdio.h>
int main()
{
	int a;
	int b;
	printf("Enter the two numbers");
	scanf("%d%d",&a,&b);
	int *pa,*pb;
	pa=&a;
	pb=&b; 
	int *sum ;
	sum=*pa+*pb;
	printf("The addition of the %d and %d is %d",a,b,sum);
	return 0;
}
