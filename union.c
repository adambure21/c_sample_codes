//This code shows the demo of : Different representation of the same allocated memory space.
//Author :: A.D.Ambure.
//Email  :: adambure21@gmail.com

#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *args)
{
	union numbers{//Declares the union
		int rollno;
		char name;
		}u;
		u.rollno=97;

		system("clear");
		system("echo \"The input 97 is already assigned to the union\" ");

		printf("\n Rollno is %d ",u.rollno);//Integer roll number is stored.
		printf("\n Name is %c\n ",u.name);/*Representation of the Integer in char form.Print
		Ascii char corrosponds to 97.*/
		
		printf("\n Memory size is %zu",sizeof(union numbers));
		printf("\n Memory size is %zu \n",sizeof(u));
}		
		
