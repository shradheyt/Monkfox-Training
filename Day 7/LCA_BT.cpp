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

Node* lca(Node* root,int n1,int n2)
{
	
        if(root == NULL){
            return root;
        }
        if(root->data == n1 || root->data == n2){
            return root;
        }
        
        Node* left = lca(root->left, n1, n2);
        Node* right = lca(root->right, n1, n2);

        if(left != NULL && right != NULL){
            return root;
        }
        return left != NULL ? left : right;

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
	Node* b[8];
	for(int i=0;i<8;i++)
	{
		b[i]=new Node;
	}
	
    root=b[0];
    b[0]->data=3;
    b[0]->left=b[1];
    b[0]->right=b[2];
    
    
	b[1]->data=6;
    b[1]->left=b[3];
    b[1]->right=b[4];
    
    b[2]->data=8;
    b[2]->left=NULL;
    b[2]->right=b[5];
    
    b[3]->data=2;
    b[3]->left=NULL;
    b[3]->right=NULL;
    
    b[4]->data=11;
    b[4]->left=b[6];
    b[4]->right=b[7];
    
    b[5]->data=13;
    b[5]->left=b[8];
    b[5]->right=NULL;
    
    b[6]->data=9;
    b[6]->left=NULL;
    b[6]->right=NULL;
    
    b[7]->data=5;
    b[7]->left=NULL;
    b[7]->right=NULL;
    
    b[8]->data=7;
    b[8]->left=NULL;
    b[8]->right=NULL;
	
	inorder(root);
	cout<<lca(root,2,5);
}
