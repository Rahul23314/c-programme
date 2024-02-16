#include<stdio.h>
#include<stdlib.h>
int main() 
{
	int *p;
	p=(int *)malloc(2*sizeof(int));
	scanf("%d",(p+0));
	scanf("%d",(p+1)); 
	printf("the addition is %d",*(p+0)+*(p+1));

	
}
