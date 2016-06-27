#include<iostream>
#include<queue>
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

void LevelOrder(Node* root)
{
	if(root==NULL)
	return ;
	queue<Node*> q;
	q.push(root);
	while(!q.empty())
	{
		Node* curr=q.front();
		cout<<curr->data<<" ";
		if(curr->left!=NULL)
		q.push(curr->left);
		if(curr->right!=NULL)
		q.push(curr->right);
	    q.pop();
	} 
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
	

	inorder(root);
	cout<<endl;
	LevelOrder(root);
}
