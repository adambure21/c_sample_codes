#include<stdio.h>
#include<stdlib.h>
#include"list.h"
void init(list *l){
	l->head=NULL;
}
void insert(list *l,node *n){
	node *temp;
	if(l->head==NULL){
		l->head=n;
	}
	else{
		temp=l->head;
		while(temp->next)
			temp=temp->next;
		temp->next=n;
	}
}
node* createnode(){
	node *n;
	n = (node*)malloc(sizeof(node));
	printf("\n Enter Data :\t");
	scanf("%d",&n->data);
	n->next=NULL;

	return n;
}
void display(list *l){
	node *temp=l->head;
	while(temp){
		printf("\n Data : \t %d",temp->data);
		temp = temp ->next;
	}
}
void searchlist(list *l,int data){
	node *temp;
//	int *s;	
//	printf("\n Size of  temp is %zu  %zu \n",sizeof(temp),sizeof(s));
	temp = l->head;
	int flag=0;
	while(temp){
		if(temp->data == data){
			printf("\n Data found %d \n",temp->data);
			flag=1;
			break;
		}
		temp = temp->next;
	}
	if(!flag)
		printf("\n Data No found");

}

void delete(list *l,int position){
	node *temp,*delete;
	temp = l->head;
	int i=1;
	while(temp){
		if(i== position)
		{
			printf("\n DAta is %d ",temp->data);
			break;
		}
		temp= temp->next;
		i++;
	}
	delete = temp ->next;
	temp ->data = delete->data;
	temp ->next = delete->next;
	free(delete);
	display(l);
//	printf("\n Data is %d \n",temp->data);
}
