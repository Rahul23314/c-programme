#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i; 
	char *p;
	int count=0; 
	printf("Enter the no.of characters=");
	scanf("%d",&n); 
	scanf("%d",&n);
	p=(char*)malloc(n*sizeof(char));
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",(p+i));
	} 
	for(i=0;i<=n-1;i++)
	{
		if(*(p+i)>='A'&&*(p+i)<='Z')
		{
			count++;
		}
	}
}
