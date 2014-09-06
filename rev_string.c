/*The code reverses the string without any additional storage space.
 *Author : Abhinay D. Ambure.
 *email : adambure21@gmail.com
 * */

#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#define size 10

void main(int argc,char *argv[]){
	char *name = (char*)malloc(sizeof(char)*size);

	printf("\n Enter name :\t ");
	scanf("%s",name);
	*(name+size) = '\0';
	printf("\n Original string is %s\n ",name);
	char temp;
	int i = 0,j = strlen(name)-1;
	while(i<j){
		temp = name[i];
		name[i] = name[j];
		name[j] = temp;
		i++;j--;
	}
	printf("\n Reversed String is %s \n ",name);
}
