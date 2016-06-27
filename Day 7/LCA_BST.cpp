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

int lca(Node* root,int n1,int n2)
{
	if(n1<root->data&&n2<root->data)
	lca(root->left,n1,n2);
	
	else if(n1>root->data&&n2>root->data)
	lca(root->right,n1,n2);
	else
	return root->data;
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
	root=Insert(root,25);
	
	cout<<lca(root,25,30);

}
