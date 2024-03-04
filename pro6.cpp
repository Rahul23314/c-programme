#include<stdio.h>
#include<stdlib.h>  // use of this library
int main()
{
	char path[]="C:\\Users\\hp\\Desktop\\practice c\\file.txt";  // write the path in the "string "
	FILE *pn; // creates a pointer having a datatype of FILE
	pn=fopen(path,"r");  // here there is fopen() function which connect the path address with file  // after path there is opening mode like write,read,append in there syntaxes
	if(pn==NULL)  // if the address is NULL meaning nothing file is not connected 
	{
		printf("\nCan't connected");
		exit(1);
	} 
	char ch;
    while(fgetc(pn)!=EOF)                                   // fgetrc(This is for indiviual character)
 {                                                         
 	printf(ch);
 	
 }
                                                            // there is no need of the increment because there is file handler who manage the work of the increment automatically
	
	
	return 0;
}
