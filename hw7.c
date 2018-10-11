#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "list.h"

int main(){
	// struct node n0; struct node n1; struct node n2; struct node n3;
	struct node * p0 = malloc(sizeof(struct node)); 
	struct node * p1 = malloc(sizeof(struct node));
	struct node * p2 = malloc(sizeof(struct node)); 
	struct node * p3 = malloc(sizeof(struct node));
	p0->i=0; p0->next= p1;
    p1->i=1; p1->next= p2;
	p2->i=2; p2->next= p3;
	p3->i=3; p3->next= NULL;
    
	printf("-------------------------------------------------\nTest 1\n------\n");
	printf("List: ");
	print_list(p0); //prints 0, 1, 2, 3, 
	
	printf("New list w/ 9 added to front: ");
	struct node * new_list = insert_front(p0, 9);
	print_list(new_list) ; //prints 9, 0, 1, 2, 3, 	
	
	printf("New list w/ 8 added to front: ");
	struct node * new_list0 = insert_front( new_list, 8);
	print_list( new_list0 ) ; //prints 8, 9, 0, 1, 2, 3, 	
	
	printf("List after freeing all nodes (should be empty): ");
	struct node * afterfree = free_list(new_list0);
	print_list( afterfree ); //print null
	
	struct node * nod = malloc(sizeof(struct node));
	nod->i= NULL; nod->next=NULL;
	printf("-------------------------------------------------\nTest 2\n------\n");
	printf("List: ");
	print_list(nod); //prints  
	
	printf("New list w/ 9 added to front: ");
	struct node * new = insert_front(nod, 9);
	print_list(new) ; //prints 9,  	
	
	printf("New list w/ null added to front: ");
	struct node * new0 = insert_front( new, NULL);
	print_list( new0 ) ; //prints 9, 	
	
	printf("List after freeing all nodes (should be empty): ");
	struct node * after = free_list(new0);
	print_list( after ); //print null
	
	}
