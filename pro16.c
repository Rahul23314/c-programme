#include<stdio.h>
int main()
{
	int num[1];
	int *p;
	p=&num[0];// p=num 
	scanf("%d",(p));
	printf("%d",(*p)*(*p)); 
	return 0;
}
