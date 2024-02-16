// code for runtime: malloc(bytes)
#include<stdio.h> 
int sum=0;
#include<stdlib.h> 
int main()
{
	int i,*p;
	p=(int*)malloc(24);    // typecasting malloc(no.of bytes)
	for(i=0;i<=5;i++) 
	{
	scanf("%d",(p+i));
	} 
	for(i=0;i<=5;i++) 
	{
    
     sum=sum+*(p+i);
	} 
	printf("%d",sum);
}
