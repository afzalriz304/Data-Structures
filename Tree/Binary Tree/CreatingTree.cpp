#include<stdio.h>
#include<stdlib.h>

//structure of tree
struct node {
	int data;
	struct node* left;
	struct node* right;
};

struct node* createNode(int data);

struct node* createNode(int data){
	struct node* node	=	(struct node*)malloc(sizeof(struct node));
	
	node->data	=	data;
	node->left	=	NULL;
	node->right	=	NULL;
	
	return node;
}

int main(){
	struct node* root	=	createNode(1);
	struct node* rootLeft	=	createNode(2);
	root->left	=	rootLeft;
	root->right	=	createNode(3);
	
	rootLeft->left	=	createNode(4);
	
	getchar();
	return 0;
}
