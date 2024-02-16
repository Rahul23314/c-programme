// change the total array and print the new and old also
#include<stdio.h> 
int i; 

void array(int *p); 
int main()
{ 
  int num[4]={9,8,5,1};

	for(i=0;i<=3;i++) 
	{
		printf("%d",num[i]);
	} 
  array(num);
 	for(i=0;i<=3;i++) 
	{
		printf("\t%d",num[i]);
	}
	
} 
void array(int *p)
{
	*(p)=15;
	*(p+1)=58; 
	*(p+2)=14; 
	*(p+3)=25;
	
}
