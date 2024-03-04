// scan the element of the array having the 4 element present 
#include<stdio.h>
int main()
{
  int num[4]; 
  int i;
  //int *p;
 // p=&num[0];
  for(i=0;i<=3;i++)
  {
  	scanf("%d",&num[i]);   // here instead of the p+i we can put the p+0,p+1 or &num[0],&num[1],&num[2]
  } 
  for(i=0;i<=3;i++)
  {
  	printf("%d",*(num+i));
  }
}
