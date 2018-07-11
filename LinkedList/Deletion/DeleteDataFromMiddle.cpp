#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

void print(struct node* n);
void deleteData(struct node* head,int del_data);

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
	
	int del_data,pos;
	
   	printf("the data to delete \n");
	scanf("%d",&del_data);
	
   	deleteData(head,del_data);
   	
   	printf("after \n");
   	print(head);
	
	return 0;
}

void deleteData(struct node* head,int del_data){
	struct node * required	=	head;
	struct node * prev_node	;
	while(required->next!=NULL){
		if(required->data ==del_data){
			prev_node->next	=	required->next;
			return;
		}
		else{
			prev_node	=	required;
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
