#include<stdio.h>
struct Student
{
	int x,y;
}; 
int main()
{
	struct Student obj; 
	obj.x=15;
	obj.y=8;
	show(obj);
	printf("%d-%d",obj.x,obj.y);
	
} 
void show(struct Student temp)
{
	printf("%d-%d",temp.x,temp.y); 
}
