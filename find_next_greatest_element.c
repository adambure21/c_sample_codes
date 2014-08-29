#include<stdio.h>
#include<stdlib.h>
void input(int *array,int size){
	printf("\n Enter the array elements \n");
	int i=0;
	for(i=0;i<size;i++){
		scanf("%d",(array+i));
	}
}
void display(int *array,int size){
	int i=0;
	for(i=0;i<size;i++){
	//	printf("\n%d",*(array+i));
		printf("\t%d",array[i]);

	}
	printf("\n\n");

}
int* next_larger(int *array,int size){
	int *larger=(int*)malloc(sizeof(int)*size);
	int i=0,j=0;
	for(i=0;i<size;i++){
		for(j=i;j<size;j++){
			if(i==size-1){
				larger[i]=-1;
				break;
			}
			else if(array[j] > array[i]){
				larger[i]=array[j];
				break;
			}
		}
	}
//	display(larger,size);
	return larger;
}
void main(){
	int *size=NULL;

	size=(int*)malloc(sizeof(int));
	printf("\n Enter the size of the array \n");
	scanf("%d",size);

	int *array=NULL;

	array=(int*)malloc(sizeof(int) * *(size));
	input(array,*size);
	int *result=next_larger(array,*size);

	display(array,*size);
	display(result,*size);

}
