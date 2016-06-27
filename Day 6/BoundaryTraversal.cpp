#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* left;
	Node* right;
};


Node* createNode(int data)
{
	Node* newNode=new Node;
	newNode->data=data;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}
Node* Insert(Node* root,int data)
{
	if(root==NULL)
	{
		root=createNode(data);
		return root;
	}
	else if(data<=root->data)
	{
		root->left=Insert(root->left,data);
	}
	else
	{
		root->right=Insert(root->right,data);
	}
	return root;
}


void inorder(Node* root)
{
	if(root==NULL)
	return;
	else
	{
		inorder(root->left);
		if(!root->left &&!root->right)
		cout<<root->data<<" ";
		inorder(root->right);
		
	}
}

void preorder(Node* root)
{
	if(root==NULL)
	return;
	else
	{
		if(root->left)
		cout<<root->data<<" ";
		preorder(root->left);
	}
}

void postorder(Node* root)
{
	if(root==NULL)
	return;
	else
	{
		postorder(root->right);
		if(root->right)
		cout<<root->data<<" ";
	}
}
int main()
{
	Node* root=NULL;
	root=Insert(root,20);
	root=Insert(root,10);
	root=Insert(root,30);
	root=Insert(root,15);
	root=Insert(root,33);
	root=Insert(root,12);
	root=Insert(root,8);
	root=Insert(root,18);
	root=Insert(root,25);
	
	//cout<<searchNode(root,10);
	
	preorder(root);
	inorder(root);
	postorder(root);
	
}
