#include<iostream>
#include<climits>
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
Node* searchNode(Node* root,int data)
{
	if(root==NULL)
	return NULL;
	else if(root->data==data)
	return root;
	else if(data<=root->data)
	searchNode(root->left,data);
	else
	searchNode(root->right,data);
}

bool isBST(Node* root,int i,int j)
{
	if(root==NULL)
	return true;
	if(root->data>i && root->data<j && isBST(root->left,i,root->data-1) && isBST(root->right,root->data+1,j))
	return true;
	else
	return false;
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
	

     cout<<isBST(root,INT_MIN,INT_MAX);
}
