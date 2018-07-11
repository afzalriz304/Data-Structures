#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

void print(struct node* n);
void push(struct node* head,int data,int pos);

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
	
	int new_data,pos;
	
   	printf("the data to add \n");
	scanf("%d",&new_data);
	
   	printf("the data to add after \n");
	scanf("%d",&pos);
   	push(head,new_data,pos);
   	
   	printf("after \n");
   	print(head);
	
	return 0;
}

void push(struct node* head,int data,int pos){
	struct node* new_node	=	(struct node *)malloc(sizeof(struct node));
	new_node->data	=	data;
	struct node* required	=	head;
	struct node* temp;
	while(required->next!=NULL){
		if(required->data ==pos){
			temp=required->next;
			required->next	=	new_node;
			new_node->next	=	temp;
			return;
		}
		required=required->next;
	}
	
}

void print(struct node* n){
	
   	while(n!=NULL){
   		printf("%d\n",n->data);
   		printf("%d\n",n->next);
   	
   		n=n->next;
   	}
}
