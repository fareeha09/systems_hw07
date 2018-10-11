#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "list.h"

//take a pointer to a node struct and print out all of the data in the list
void print_list(struct node * pointer){
	while(pointer){
		printf("%d ", *(pointer));
		pointer= pointer->next;
	} printf(" \n");
}

//adds new node to beginning of list
//returns a pointer to beginning of list	
struct node * insert_front(struct node *n,int num ){
	struct node * newnode = malloc(sizeof(struct node));
	newnode->i = num;
	newnode->next = n;
	return newnode;
}

struct node * free_list(struct node * n){
	struct node * pointer = n;
	while (n){
		pointer = n-> next;
		free(n);
		n= pointer;
	} return n;
}
