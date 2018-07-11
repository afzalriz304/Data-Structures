#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

void print(struct node* n);
void push(struct node* head,int data);

int main(){
	
	struct node* head	=	NULL;
	struct node* second	=	NULL;
	struct node* third	=	NULL;
	
	head	=	(struct node*)malloc(sizeof(struct node));
	second	=	(struct node*)malloc(sizeof(struct node));
	third	=	(struct node*)malloc(sizeof(struct node));
	
	head->data	=	1;
   	head->next	=	second;
   
   	second->data	=	2;
   	second->next	=	third;
   
   	third->data	=	3;
   	third->next	=	NULL;
   	
   	
	printf("Before \n");
	
	print(head);
	
	int new_data;
   	printf("the data to add \n");
	scanf("%d",&new_data);
   	push(head,new_data);
   	
   	printf("after \n");
   	print(head);
	
	return 0;
}

void push(struct node* head,int data){
	struct node* new_node	=	(struct node *)malloc(sizeof(struct node));
	
	new_node->data	=	data;
	new_node->next	=	NULL;
	struct node* last	=	head;
	while(last->next!=NULL){
		last=last->next;
	}
	last->next	=	new_node;
	
	return;
}

void print(struct node* n){
	
   	while(n!=NULL){
   		printf("%d\n",n->data);
   		printf("%d\n",n->next);
   	
   		n=n->next;
   	}
}
