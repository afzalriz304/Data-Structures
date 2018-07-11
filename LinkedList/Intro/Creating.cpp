#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

int main(){
	struct node* head	=	NULL;
	struct node* second	=	NULL;
	struct node* third	=	NULL;
	
	//allocates 3 node in heap
	head	=	(struct node*)malloc(sizeof(struct node));
	second	=	(struct node*)malloc(sizeof(struct node));
	third	=	(struct node*)malloc(sizeof(struct node));
	
	/* Three blocks have been allocated  dynamically. 
     We have pointers to these three blocks as first,
     second and third     
       head           second           third
        |                |               |
        |                |               |
    +---+-----+     +----+----+     +----+----+
    | #  | #  |     | #  | #  |     |  # |  # |
    +---+-----+     +----+----+     +----+----+
    
   # represents any random value.
   Data is random because we haven’t assigned 
   anything yet  */
   
   //assigning data to blocks
   head->data	=	1;
   head->next	=	second;
   
   second->data	=	2;
   second->next	=	third;
   
   third->data	=	3;
   third->next	=	NULL;
   
   struct node* n=head;
   while(n!=NULL){
   	printf("%d\n",n->data);
   	printf("%d\n",n->next);
   	
   	n=n->next;
   }
   
}
