#include<stdio.h>
#include<stdlib.h>

/**
create a binary tree 
		
		10
	   / \
	 11   9
	/    / \
   7	15	8
   
*/

//structure of tree
struct node {
	int data;
	struct node* left;
	struct node* right;
};

struct node* createNode(int data);
void inorderTraverse(struct node* root);

struct node* createNode(int data){
	struct node* node	=	(struct node*)malloc(sizeof(struct node));
	
	node->data	=	data;
	node->left	=	NULL;
	node->right	=	NULL;
	
	return node;
}

void inorderTraverse(struct node* root){
	
	if(root==NULL){
		return;
	}
	inorderTraverse(root->left);
	printf("%d ",root->data);
	inorderTraverse(root->right);
}

int main(){
	struct node* root	=	createNode(10);
	root->left	=	createNode(11);
	root->right	=	createNode(9);
	root->left->left	=	createNode(7);
	root->right->left	=	createNode(15);
	root->right->right	=	createNode(8);
	
	inorderTraverse(root);
	
	return 0;
}
