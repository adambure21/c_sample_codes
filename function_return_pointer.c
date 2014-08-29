//The code is simple demostration of the pointer returned from funtion
//It shows way to declare,define the pointer returning from  a funtion
//Author :: A. D. Ambure
//email  :: adambure21@gmail.com

#include<stdio.h>
#include<stdlib.h>
struct student
{
	int rollno;
	char name[10];
}s;
int* roll();//Declare the return type of function as int *(You can also use like int *roll())
//Just to avoid confusion.I prefer this.
char* name();//Declare the function which return a pointer to char

void main(int argc,char* argv[])
{
	printf("\n Enter roll no and name :\t");
	scanf("%d",&(s.rollno));
	scanf("%s",s.name);
	printf("\n Roll number is %d \n",s.rollno);
	printf("\n Name is %s \n",s.name);

	int *rollno;
	char *name_ptr;
	rollno=roll();
	name_ptr=name();
	system("clear");
	printf("\n Roll no is %d \t ",*rollno);
	printf("\n Name is %s \t ",name_ptr);
	printf("\n");

}

int* roll()
{
	return (&s.rollno);

}
char* name()
{
	return (s.name);
}
