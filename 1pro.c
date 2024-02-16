// create a structure for fees strucure
// create a structure for fees strucure
#include<stdio.h>  
#include<string.h>
	void c1();
	void i1();
	void e1(); 
	void D1(); 
	void T1(); 
	void year();
	void year1();
	void year2();
int main()
{
	int choice; 
	int R1; 
	int Q1;
	printf("press\n1=Director\n2=Staffs\n3=Student\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:D1();
		       break;  
		case 2:T1();
		       break;
		
	} 
 
} 
	void D1()
	{
		int k;
		printf("Enter the year of experience for the dierctor=\n");
		scanf("%d",&k);
		switch(k)
		{
			case 5:printf("The salary of the Director is 1,00,000 Rs"); 
			       break; 
			case 10:printf("The salary of the Director is 1,50,000 Rs");
			       break;
			case 15:printf("The salary of the Director is 2,00,000 Rs");
			       break; 
			case 20:printf("The salary of the Director is 2,50,000 Rs"); 
			       break;  
			default:printf("please Entered valid year Experience");
			
		} 
		
	}  
	void T1()
	{
		int y; 
		printf("Enter the year of the staffs= \n press\n1.First year enginnering \n2.Second year enginnering \n3.Third year enginnering \n4.Fourth year enginnering\n");
	    scanf("%d",&y);
	    if(y==1)
	    {
	    	printf("The salary of the staff is 1,00,000 Rs");
		} 
		else if ((y==2)||(y==3)||(y==4))
		{   
		    int dept;
		    printf("Enter the department press \n1.Computer Enginnering \n2.Information Tech.\3.Electronics & Telecommunication\n"); 
		    scanf("%d",&dept);
		    switch(dept)
		    {
		    	case 1:c1();
		    	      break; 
		    	case 2:c1();
		    	      break;
		    	case 3:c1();
		    	      break; 
		    	default:printf("Please Enter the Valid Department");
			}
		} 
		else
		{
			printf("Please Enter the valid year");
		}
		
	} 
   void c1()
	{   char staff[15];  
	    char s;                 
	    scanf("%c",&s);
	  printf("Enter the Degree of the staff=");  
	  gets(staff);
	  
	  if(strcmp(staff,"B.E")==0||(strcmp(staff,"B.TECH")==0))
	  { year();
	 
	  } 
	  else if(strcmp(staff,"M.E")==0||(strcmp(staff,"M.TECH")==0))
	  {
	   year1();
	  } 
	  else if(strcmp(staff,"PHD")==0)
	  {
	  
	  year2();
      } 
      else 
      {
      	printf("Please Enter Valid Degree.");
	  }
	}  
	
	void year()
	{
		 int yy;
	     printf("Enter the Experience=");
	     scanf("%d",yy); 
	     if(yy>=0 && yy<=5)
	    
		{
		printf("The salary of teacher is 30,000RS"); 
	    }
	    else if(yy>5&&yy<=10)
		{
		printf("The salary of teacher is 50,000RS"); 
	    } 
	    else 
	    {
	    	printf("Your are promoted as Professorr,Your salary as per of Basic M.E or M.Tech level ");
		}
	} 
		void year1()
	{
		 int yy;
	     printf("Enter the Experience=");
	     scanf("%d",yy); 
	     if(yy>=0 && yy<=5)
	    
		{
		printf("The salary of Assistant Professoris 60,000RS"); 
	    }
	    else if(yy>5&&yy<=10)
		{
		printf("The salary of Assistant Professor is 80,000RS"); 
	    } 
	    else 
	    {
	    	printf("Your are promoted as Professorr,Your salary as per Basic ofPHD level ");
		}
	} 
		void year2()
	{
		 int yy;
	     printf("Enter the Experience=");
	     scanf("%d",yy); 
	     if(yy>=0 && yy<=5)
	    
		{
		printf("The salary of professor is 80,000RS"); 
	    }
	    else if(yy>5&&yy<=15)
		{
		printf("The salary of Professor is 1,00,000RS"); 
	    } 
	    else 
	    {
	    	printf("Your are promoted as Princioal,Your salary as per Basic of Principal or Director level ");
		}
	}

