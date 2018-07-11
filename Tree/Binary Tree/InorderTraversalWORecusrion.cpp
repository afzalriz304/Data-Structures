#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node* left;
	struct node* right;
	node(int data){
		this->data	=	data;
		left=right=NULL;
	}
};
void inorderWOrecusion(struct node* root);

void inorderWOrecusion(struct node* root){
	stack<node*> s;
	struct node* current	=	root;
	while(current!=NULL){
		s.push(current);
		current	=	current->left;
	}
	while(s.empty()	== false){
		current	=	s.top();
		//remove from stack
		s.pop();
		printf("%d ",current->data);
		
		current=current->right;
		
		while(current!=NULL){
			s.push(current);
			current	=	current->left;
		}
		
	}
}

int main(){
	
	struct node* root	=	new node(10);
	root->left	=	new node(11);
	root->right	=	new node(9);
	root->left->left	=	new node(7);
	root->right->left	=	new node(15);
	root->right->right	=	new node(8);
	
	inorderWOrecusion(root);
	
	return 0;
}
