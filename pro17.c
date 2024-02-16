#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	p=(int *)malloc(sizeof(int));
	scanf("%d",p);
	printf("sqaure is %d",(*p)*(*p));
}
