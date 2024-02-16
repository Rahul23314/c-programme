#include<stdio.h>
int main()
{
	int x;
	int *px=&x;
	scanf("%d",*px);
	printf("%d",*px);
}
