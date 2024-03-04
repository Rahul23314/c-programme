#include<stdio.h> 
int g=5;
int main()
{ 
	int g=8;
		{
			printf("\n inner g=%d",g);
		} 
	printf("\n outer g=%d",g);
	
}
