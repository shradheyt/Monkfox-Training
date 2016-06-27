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
		cout<<root->data<<" ";
		inorder(root->right);
	}
}
int max(int a,int b)
{
	return a>b?a:b;
}

int heightOfTree(Node* root)
{
	if(root==NULL)
	return 0;
	else
	{
		return 1+max(heightOfTree(root->left),heightOfTree(root->left));
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
	cout<<"height of tree is:"<<heightOfTree(root);
	
}
