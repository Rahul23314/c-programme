// find the largest number from the scan 10 integers 
#include<stdio.h>  
int i;
int main()
{
	int a,num[10];
    for(i=0;i<=9;i++) 
    {
    	scanf("%d",(num+i));
	} 
	for(i=0;i<=9;i++) 
	{
		printf("%d",*(num+i));
	} 
	a=*(num+0);
	for(i=1;i<=9;i++)
	{
		if(a<*(num+i))
		{
			a=*(num+i);
		}
	} 
	printf("The largest number from the entered numbers is %d at %d index",a,i);
}

