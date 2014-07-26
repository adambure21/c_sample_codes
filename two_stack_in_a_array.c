/*The code is for implementing the two stacks in the single array
Structure of array and stack is

	*************************************************************************
	*									*
	*	-------------------------------					*
	*	|  |  |  |  |  |  |  |  |  |  |					*
	*	-------------------------------					*
	*   Left stack				Right stack			*
     	*  |--------->>>          |   	        <<---------|			*
  	*  Base						Base			*
	*		LIMIT FOR STACKS					*
	*************************************************************************
The code needs the optimization and Logic to be clear cuts.

Need Bug fixing.



Author : A.D.Ambure
Email : adambure21@gmail.com


*/
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

struct stack{
	int lower_top;
	int upper_top;
	int elements[SIZE];
}s;

void print_bounds();       //Used to print the upper and lower bound of the stacks.
void push(int stack_number,int number);   //Since there are 2 stack,number can be 1 or 2
int pop(int stack_number);          //Provide stack number from where to pop.
void display(int stack_number);             //display stack numbers.

void main(int args,char *argv[])
{
	//print_bounds();

	s.lower_top=-1;
	s.upper_top=-1;

	int i=0,element,stack_number;

//	print_bounds();
		

	for(i=0;i<5;i++){
		printf("\n Enter element :\t ");
		scanf("%d",&element);
		printf("\n Stack number :\t ");
		scanf("%d",&stack_number);
		push(stack_number,element);

	}
//	print_bounds();

		display(1);//print stack 1
		display(2);
		
}

void print_bounds(){
	printf("\n The lower and upper are %d and %d ",s.lower_top,s.upper_top);
}
void push(int stack_number,int number){
	if(s.lower_top == s.upper_top-1) {
		printf("\n Overflow :\n");
		exit(1);
	
	}
	else if(stack_number==1){
		printf("\n Stack no 1 %d ",s.lower_top);
		
		s.elements[++s.lower_top]=number;
	}
	else if(stack_number==2){
		printf("\n Stack no 2 %d ",s.upper_top);
		
		s.elements[--s.upper_top]=number;
	}

}

int pop(int stack_number){
	int ele;
	if(s.lower_top==-1 || s.upper_top==SIZE){
		printf("\n underflow \n");
		exit(0);
	}
	else if(stack_number==1){
		printf("\n Stack no 1 %d ",s.lower_top);
		ele=s.elements[s.lower_top--];
		return ele;
	}
	else if(stack_number==2){
		printf("\n Stack no 2 %d ",s.upper_top);
		
		ele=s.elements[s.upper_top++];
		return ele;
	}


}
void display(int stack_number){
	int i,j;
	printf("\n First stack contents are :\t");
	if(stack_number==1){

		for(i=0;i<=s.lower_top;i++){
			printf("\t %d ",s.elements[i]);

		}	
	}
	else if(stack_number==2){
		for(i=SIZE-1;i>=s.upper_top;i--)
			printf("\t %d ",s.elements[i]);
	}
}
