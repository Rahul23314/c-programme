// keep scanning the number untill the 0 
 #include<stdio.h> 
 void getdata();
int main()
{
	getdata();  // in this case we don't know the input so no paramter passing using here 
} 
void getdata()
{
	int num;
	printf("\nEnter the number=");
	scanf("%d",&num); 
	 
	if(num==0)
	{
		return ;
	} 
	else
	{
		if(num%2==0)
		{
			printf("%d is even",num);
		} 
		else
		{
		  printf("%d is odd",num);
		} 
		getdata();
	}
		
	
}
