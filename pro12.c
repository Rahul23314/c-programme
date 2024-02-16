// 1.print the addition,subtraction by all methods of the function 1.by calling that function itself and 2.by return function 
 #include<stdio.h> 
void addition(int num1,int num2);
void subtraction(int num1,int num2);
int main()
{
	int num1,num2; 
	printf("Enter the two numbers=");
	scanf("%d%d",&num1,&num2);
	addition(num1,num2);
	subtraction(num1,num2);
	
} 
void addition(int num1,int num2)
{
	int ans;
	ans=num1+num2;
	printf("The addition of the given two numbers is %d",ans);
} 
void subtraction(int num1,int num2)
{
	int ans;
	ans=num1-num2;
	printf("The subtraction of the given two numbers is %d",ans);
}
