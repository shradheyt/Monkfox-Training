#include<iostream>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
	struct Node *prev;
} *head=NULL;

struct Node* createNode(int x)
{
	struct Node* temp =new struct Node;
	temp->data=x;
	temp->prev=NULL;
	temp->next=NULL;
	return temp;
}
void Insert(int x)
{
	struct Node* newNode =createNode(x);
	if(head==NULL)
	{
		head=newNode;
		return;
	}
	head->prev=newNode;
	newNode->next=head;
	head=newNode;
	
}

void print(Node* head)
{
	struct Node* ptr;
	ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"->";
		ptr=ptr->next;
	}
	
}
int main()
{
	Insert(12);
	Insert(32);
	Insert(34);
	Insert(10);
	print(head);
}

