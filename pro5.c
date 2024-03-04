#include<stdio.h>
void multi(int a,int b); 
void div(int a,int b);
int main()
{
	int a,b;
	printf("Enter the two numbers");
	scanf("%d%d",&a,&b);
	multi(a,b);
	div(a,b);
} 
void multi(int a,int b)
{
	int ans;
	ans=a*b;
	printf("\nThe multiplication is %d",ans);
} 
void div(int a,int b)
{
	int ans;
	ans=a/b;
	printf("The division is %d",ans);
}
