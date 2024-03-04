// scan array of 5 integer using pointer p.print all elements of array 
 
#include<stdio.h> 
int main()
{  
	int num[5];
	int *p; 
	int i;
	p=&num[0];            // scanf("%d",p+0);    scanf("%d",p+1)
	for(i=0;i<=4;i++) 
	{
		scanf("%d",p+i);
	} 
	for(i=0;i<=4;i++)
	{
		printf("%d",*p+i);
	}
}
