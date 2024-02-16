// free(); scan and print array of 3 integers  by using the modularity:
#include<stdio.h> 
#include<stdlib.h> 
int *myfun() ; 
void scan(int *q); 
void print(int *q);
int main()
{  
  int *ptr;                 // the datatype of the function and variable must be same 
  ptr=myfun();
  scan(ptr);
  print(ptr);
  	
}  
  int *myfun()          // the datatype of the return and function must be same 
  {
     int *p;
	 p=(int *)malloc(3*sizeof(int));
	 return p; 
	 free(p);
  }  
void scan(int *q)
{
	int i;
	for(i=0;i<=2;i++)
	{
		scanf("%d",(q+i));
	}
}  
void print(int *q)
{
	int i;
	for(i=0;i<=2;i++)
	{
		printf("%d",*(q+i));
	}
}
