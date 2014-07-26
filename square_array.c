//The c program does the task of squaring the array elements.
//Use of the pointer is done to access,square and restore result.
//Author : A.D.Ambure
//email  : adambure21@gmail.com
#include<stdio.h>
#include<stdlib.h>
void fill_array(int *ptr)
{
	printf("\n Enter the 10 elements \n");
	int i=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",ptr+i);
	}
	
}
void square_array(int *ptr)
{
	printf("\n Squring the array\n");
	int i=0,square=0;
	for(i=0;i<10;i++)
	{
		square=(*(ptr+i))*( *(ptr+i));
		*(ptr+i)=square;
	}

}
void display(int *ptr)
{
	system("clear");
	int i=0;
	for(i=0;i<10;i++)
	{
		printf("\n %d ",*(ptr+i));
	}
	printf("\n");
}

void main(int argc,char *argv){
	
		int arr[10];
		fill_array(arr);
		display(arr);
		square_array(arr);
		display(arr);
	
}
