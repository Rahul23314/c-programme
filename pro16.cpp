#include<iostream>
using namespace std;
int main()
{
 int a,b,choice;
 cout<<"Enter the First Number "<<endl;
 cin>>a;
 cout<<"Enter the second Number "<<endl;
 cin>>b;
 cout<<"Enter your choice \n press \n1.Addition \n 2.subtraction \n3.Multiplication \n4. Division "<<endl;
 cin>>choice; 
 do{
 
 switch(choice)
 {
 	case 1:cout<<"Addition of "<<a<<" & "<<b <<" is "<<a+b<<endl;
 			break;
 	case 2:cout<<"subtraction of "<<a<<" & "<<b <<" is "<<a-b<<endl;
 			break; 
	case 3:cout<<"multiplication of "<<a<<" & "<<b <<" is "<<a*b<<endl;
 			break;
	case 4:cout<<"Division of "<<a<<" & "<<b <<" is "<<(float)a/b<<endl;
 			break;	 
	default:cout<<"Enter the valid choice "	<<endl; 
	cout<<"Do you want to continue \n5.Yes "<<endl;
	cin>>choice;
 }
}while(choice==5);
return 0;
}

