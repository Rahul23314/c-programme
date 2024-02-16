// create an array of 8 integers scan from user print addition in the main() ,by using modulirity,also by runtime 
#include<stdio.h> 
#include<stdlib.h> 
  int *myfun(); 
  int addition(int *ptr,int n); 
   void scan(int *ptr,int n);
int main()
{  int *ptr;
   ptr=myfun(); 
   scan(ptr,8);
   int x;
   x=addition(ptr,8); 
   printf("Addition of the integers is %d",x);
	
}  
 
  int *myfun() 
  {
 	int *p;
 	p=(int *)malloc(8*sizeof(int)); 
 	return p;
 	free(p);
 }   
 void scan(int *ptr,int n)
 {
 	int i;
 	for(i=0;i<=n-1;i++)
 	{
 		scanf("%d",(ptr+i));
	 }
 }
 
int addition(int *ptr,int n)
{
	int i,sum=0;
	for(i=0;i<=n-1;i++)
	{
		sum=sum+*(ptr+i);
	} 
	return sum;
}
 
