#include<stdio.h>
int main()
{
	int num[5]; 
	int i;
	printf("Enter the 5 numbers=");
	for(i=0;i<=4;i++) 
	{
		scanf("%d",&num[i]);
	} 
	for(i=0;i<=4;i++) 
	{
		printf("%d-%u\n",num[i],&num[i]);
	}
}
