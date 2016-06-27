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
struct Node* min(struct Node* root) {
	if(root == NULL) return NULL;
	while(root->left != NULL)
		root = root->left;
	return root;
}

Node* successor(Node* root,int data)
{
	Node* current=searchNode(root,data);
	if(current==NULL)
	return current;
	
	if(current->right!=NULL)
	{
		return min(current->right);
	}
	else
	{
		Node* suc=NULL;
		Node* ancestor=root;
		while(ancestor->data!=current->data)
		{
			if(current->data<ancestor->data)
			{
				suc=ancestor;
				ancestor=ancestor->left;
			}
			else
			ancestor=ancestor->right;
			
			
		}
		return suc;
		
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
	
	
//	inorder(root);
struct Node* s=successor(root,33);
if(s==NULL)
{
	cout<<"No Successor:"<<endl;
}
else
cout<<s->data;
	
	
}
