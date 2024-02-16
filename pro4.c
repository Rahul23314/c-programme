#include<stdio.h>
int main()
{
	int num[8]={10,8,45,76,10,79,42,87} ;
	int i,count=0;
	for(i=0;i<=7;i++) 
	{
		if(num[i]==10) 
		{
			count++;
		}
	} 
	printf("count=%d",count);
}
