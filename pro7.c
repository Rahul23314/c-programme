// parameters passing by address due to this we can occur the changes from called fuction to calling function 
// while there use of base address at the time of passing 
// print the array by using the parameter passing by address 
#include<stdio.h> 
void myfun(int p); 
int sum=0; 
void addition(int p) ;
int main()
{ 
    int num[4]={5,8,6,7};  
    int i;
   for(i=0;i<=3;i++)
   {
       addition(num[i]);
   }
    printf("The addition of the numbers is %d",sum);

} 

void addition(int p) 
{
	
    sum=sum+p;
   
	
}

