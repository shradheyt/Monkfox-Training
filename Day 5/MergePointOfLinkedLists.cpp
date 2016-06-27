#include<iostream>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
} *head=NULL;

int length(struct Node *head) 
{
	struct Node* ptr=head;
    int len = 0;
    while(ptr != NULL) {
        len++;
        ptr = ptr->next;
    }
    return len;
}
struct Node* findMerge(struct Node* ptr1,struct Node* ptr2)
{
	
	int m=length(ptr1);
	int n=length(ptr2);
	int diff=n-m;
	
	if(m>n)
	{
		struct Node *temp=ptr1;
		ptr1=ptr2;
		ptr2=temp;
		diff=m-n;
	}
	for(int i=0;i<diff;i++)
	{
		ptr2=ptr2->next;
		
	}
	while(ptr1!=NULL&&ptr2!=NULL)
	{
		if(ptr1==ptr2)
		return ptr1;
		else
		ptr1=ptr1->next;
		ptr2=ptr2->next;
	}
	return 0;
}
int main()
{
	struct Node *head1 = NULL, *head2 = NULL;
    struct Node *temp[7];
    for(int i=0;i<7;i++) {
        temp[i] = new struct Node;
    }
    temp[0]->data = 4;
    temp[0]->next = temp[1];
    temp[1]->data = 6;
    temp[1]->next = temp[2];
    temp[2]->data = 7;
    temp[2]->next = temp[3];
    temp[3]->data = 1;
    temp[3]->next = NULL;
    temp[4]->data = 9;
    temp[4]->next = temp[5];
    temp[5]->data = 3;
    temp[5]->next = temp[6];
    temp[6]->data = 5;
    temp[6]->next = temp[2];

    head1 = temp[0];
    head2 = temp[4];
    struct Node *C = findMerge(head1, head2); 
    cout<<C->data;
}
