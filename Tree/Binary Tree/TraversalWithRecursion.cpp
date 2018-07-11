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
void preorderTraverse(struct node* root);
void postorderTraverse(struct node* root);

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

void preorderTraverse(struct node* root){
	
	if(root==NULL){
		return;
	}
	printf("%d ",root->data);
	preorderTraverse(root->left);
	preorderTraverse(root->right);
}

void postorderTraverse(struct node* root){
	
	if(root==NULL){
		return;
	}
	postorderTraverse(root->left);
	postorderTraverse(root->right);
	printf("%d ",root->data);
}
int main(){
	struct node* root	=	createNode(10);
	root->left	=	createNode(11);
	root->right	=	createNode(9);
	root->left->left	=	createNode(7);
	root->right->left	=	createNode(15);
	root->right->right	=	createNode(8);
	
	printf("inorder traversal--->\n");
	inorderTraverse(root);
	printf("\n");
	
	printf("preorder traversal--->\n");
	preorderTraverse(root);
	printf("\n");
	
	printf("postorder traversal--->\n");
	postorderTraverse(root);
	printf("\n");
	
	return 0;
}
