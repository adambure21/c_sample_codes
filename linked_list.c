/*
Code create the singly linked list.
Options are provided to the linked list to add elements at front,end and begining of the linked
list.
Code needs the optimization.
		
	-----	   ------      ------
       |     |---->|    |---->|      |------>
	-----	   ------      ------
Head_node

Author : A.D.Ambure
Email  : adambure21@gmail.com

*/

#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *link;
};
typedef struct node node;
node *first_node;

//////////////////////////////////////////////////////////////////////////
node* getNode(){
	node *temp;
	temp=(node*)malloc(sizeof(node));
	if(temp==NULL){
			printf("\n No sufficiant memory\n");
		return;
	}
	printf("\n Enter the data of node :\t");
	scanf("%d",&temp->data);
	temp->link=NULL;
	return temp;
}

void print(node *first){
	if(first){
		printf("\n Data is \t %d ",first->data);
		print(first->link);
	}
}

int count(node *first){
	if(first){
		return 1+count(first->link);
	}
	else 
		return 0;
}
void create_list(node *first,int node_count){
	node *new_node;
	int i=0;
	for(i=0;i<node_count;i++){
		new_node=getNode();
		first->link=new_node;
		first=new_node;
	}
}
void add_begining(node *first,node *new_node);
void add_end(node *first,node *new_node);
void add_position(node *first,node *new_node,int position);

void add_new_data(node *first){
	system("clear");
	node *new_node;
	new_node=getNode();
	printf("\n Enter choice\n\t1) Add at begin\n\t2) Add at end\n\t3) Add specified position\n\t4)Print\n");
	int option;
	scanf("%d",&option);
	switch(option){
		case 1:{
			add_begining(first,new_node);
			break;
		}
		case 2:{
			add_end(first,new_node);
			break;
		}
		case 3:{
			printf("\n Enter data after which you have to add new node\n");
			int position;
			scanf("%d",&position);
			add_position(first,new_node,position);
			break;
		}
		case 4:{
			print(first_node);
			break;
		}
		default:{
			printf("\n Not a valid choice \n");
			break;	
		}
	}
}

void add_begining(node *first,node *new_node){
	printf("\n Addition of Data at begining \n");
	new_node->link=first;
	first=new_node;
	first_node=first;
}

void add_end(node *first,node *new_node){
	printf("\n Addition of Data at end \n");
	while(first->link!=NULL){
		first=first->link;
	}
	first->link=new_node;
}

void add_position(node *first,node *new_node,int position){
	printf("\n Addition of Data After position\n");
	while(first->data!=position){
		first=first->link;
	}
	new_node->link=first->link;
	first->link=new_node;
}

void main(int argc,char *argv[])
{
	int node_count=0,option=1;
	system("clear");
	printf("\n Enter size of Linked list\t");
	scanf("%d",&node_count);
	node_count--;
	
	first_node=getNode();

	create_list(first_node,node_count);
	print(first_node);
	add_new_data(first_node);
	
	printf("\n count is %d \n\n",count(first_node));
/*	do{
		add_new_data(first_node);
		printf("\n Do you want to continue : (1/0):\t");
		scanf("%d",&option);
	}
	while(option==1);*/
	print(first_node);
	printf("\n count is %d \n\n",count(first_node));

}
