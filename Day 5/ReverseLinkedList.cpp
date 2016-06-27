#include<iostream>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
} *head=NULL;

Node* insert(int x)
{
	struct Node* temp= new struct Node;
	temp->data=x;
	temp->next=NULL;
	if(head!=NULL)
	temp->next=head;
	head=temp;
	return head;
}

void reverse(struct Node* p)
{
	if(p->next==NULL)
	{
		head=p;
		return;
	}
	else
	{
		reverse(p->next);
		struct Node* q=p->next;
		q->next=p;
		p->next=NULL;
	}
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
	insert(3);
	insert(7);
	insert(5);
	reverse(head);
	print(head);
	
	
}
