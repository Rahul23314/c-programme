//  runtime and compiletime memory 
#include<stdio.h>
int main()
{
	int num[5]; 
	int n; 
	int i;
	printf("fjsfsfs");
	scanf("%d",&n);
	printf("%d",n);   // here we don't know what will be the value of the n which will be given by the user so there maybe memory shotage or wastage so it is inlogicall 
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",(num+i));
	}
}
