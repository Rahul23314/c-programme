#include<stdio.h>
int main()
{
	char ch;
	char *pch; 
	pch=&ch;
	printf("Enter the character=");
	scanf("%c",pch);
	if(*pch>='A'&&*pch<='Z')
	{
		printf("Uppercase");
	} 
	else if(*pch>='a'&&*pch<='z')
	{
		printf("Lowercase");
	}
}
