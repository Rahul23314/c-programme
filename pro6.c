#include<stdio.h>
int main()
{
	int num[5];
	int*p;
	p=&num[0]; 
	int i;
	for(i=0;i<=4;i++) 
	{
		scanf("%u",p+i);
	} 
	for(i=0;i<=4;i++) 
	{
		printf("%d",*(p+i));
	}
}
