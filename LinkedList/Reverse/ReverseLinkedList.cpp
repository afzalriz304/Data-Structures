#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

void print(struct node* n);
void reverse(struct node* head);

int main(){
	
	struct node* head	=	NULL;
	struct node* second	=	NULL;
	struct node* third	=	NULL;
	struct node* fourth	=	NULL;
	
	head	=	(struct node*)malloc(sizeof(struct node));
	second	=	(struct node*)malloc(sizeof(struct node));
	third	=	(struct node*)malloc(sizeof(struct node));
	fourth	=	(struct node*)malloc(sizeof(struct node));
	
	head->data	=	1;
   	head->next	=	second;
   
   	second->data	=	2;
   	second->next	=	third;
   
   	third->data	=	3;
   	third->next	=	fourth;
   	
   	fourth->data	=	4;
   	fourth->next	=	NULL;
   	
	printf("Before \n");
	
	print(head);
	
	reverse(head);
	return 0;
}


void reverse(struct node* head){
	struct node* prev	=	NULL;
	struct node* current	=	head;
	struct node* next	=	NULL;
	
	while(current!=NULL){
		next	=	current->next;
		
		current->next	=	prev;
		prev	=	current;
		
		current	=	next;
		
	}
	head	=	prev;
	printf("After \n");
	
	print(head);
	
}


void print(struct node* n){
	
   	while(n!=NULL){
   		printf("%d\n",n->data);
   		//printf("%d\n",n->next);
   	
   		n=n->next;
   	}
}
