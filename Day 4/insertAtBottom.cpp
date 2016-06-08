#include<iostream>
#define size 100
using namespace std;

int a[100],top=-1;

void push(int a[],int x)
{
	if(top==size-1)
	{
		cout<<"Overflow"<<endl;
	}
	else
	{
		top++;
		a[top]=x;
	}
}

int pop(int a[])
{
	int temp;
	if(top==-1)
	{
		cout<<"underflow"<<endl;
	}
	else
	{
		 temp=a[top];
		top--;
	}
	return temp;
}

int peek(int a[])
{
	return a[top];
}
void display(int a[])
{
	for(int i=top;i>=0;i--)
	{
		cout<<a[i]<<endl;
	}
}

bool isEmpty(int a[])
{
	if(top==-1)
	return true;
	return false;
}
void insertAtBottom(int s[],int data)
{
	if(isEmpty(s))
	{
		push(s,data);
		return;
	}
	int temp=pop(s);
	insertAtBottom(s,data);
	push(s,temp);
}

int main()
{
	int a[100];
    push(a,3);
    push(a,5);
    push(a,8);
    push(a,4);
    insertAtBottom(a,1);
    display(a);
		
	
}
