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
