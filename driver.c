#include"list.h"
#include<stdio.h>
void main(int argc,char* argv[]){
	list l;
	init(&l);
	int do_break =-1;
	while(1){

		node *n=createnode();
		insert(&l,n);
		printf("\n Do you want to add more nodes?(1-yes,0-No)");
		scanf("%d",&do_break);
		if(do_break == 1)
			break;
	}
	display(&l);
}
