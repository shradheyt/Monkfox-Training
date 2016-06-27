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
bool searchNode(Node* root,int data)
{
	if(root==NULL)
	return false;
	else if(root->data==data)
	return true;
	else if(data<=root->data)
	searchNode(root->left,data);
	else
	searchNode(root->right,data);
}

void inorder(Node* root)
{
	if(root==NULL)
	return;
	else
	{
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
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
	
	//cout<<searchNode(root,10);
	inorder(root);
	
}
