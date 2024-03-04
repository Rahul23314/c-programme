#include<stdio.h>
void isalpha(char ch);
int main()
{
	char ch;
	printf("Enter the alphabet=");
	scanf("%c",&ch);
} 
void isalpha(char ch)
{
	if((ch>='A'&& ch<='Z')||(ch>='a'&&ch<='z'))
	{
		printf("alphabet");
	}
}
