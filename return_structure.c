#include<stdio.h>

struct student{
	int rollno;
	char name[10];

}s;
void getdetails(struct student *s)
{
	printf("\n Enter the details :\t");
	scanf("%d",&s->rollno);
	scanf("%s",s->name);

}	

void display(struct student *s)
{
	printf("\n Details are :\t");
	printf("\n roll %d ",s->rollno);
	printf("\n Name %s ",s->name);

}
void main(int argc,char *argv[])
{
	getdetails(&s);
	display(&s);
}
