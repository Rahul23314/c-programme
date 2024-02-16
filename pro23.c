// find the smallest integer from the entered integers 
#include<stdio.h> 
	int i;
int main()
{
	int num[10];
   int a;
   for(i=0;i<=9;i++) 
   {
   	scanf("%d",(num+i));
   } 
   for(i=0;i<=9;i++) 
   {
   	printf("%d",(num+i));
   } 
   a=*(num+0);
   for(i=1;i<=9;i++) 
   {
   	if(a>*(num+i))
   	{
   	  a=*(num+i);
	}
   } 
   printf("The samllest number is %d which is at index of %d",a,i); 
   return 0;
} 

