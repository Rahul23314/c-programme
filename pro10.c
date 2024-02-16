// generalized function-In this there is use of base address of array and no.of elements.
// print the array and print the addition of the first 4 array elemnets by using the genrelized(same) function
#include<stdio.h> 
void printArray(int *m,int n,int x);
int main()
{
	int num[5]={45,87,36,49,64};  
	int sum[4]={78,54,69,34};
	printArray(num,5,1); 
	printArray(sum,4,2);
	
} 
void printArray(int *m,int n,int x)
{
	int i;
	for(i=0;i<=n-1;i++)
	{
		printf("\n%d element of %d array is %d",i,x,*(m+i));
	}
}
