// print the given array
#include<stdio.h> 
void printArray(int *x);
int main()
{
	int num[4]={6,5,47,20};
	printArray(num);    // printArray(&num[0])  
	                   // *(p+i)=p[i]
} 
void printArray(int *x)
{
   int i;
   for(i=0;i<=3;i++) 
   {
   	printf("%d",*(x+i));
   }
}
