#include<iostream>

using namespace std;

struct stack{
	int val[100];
	int Top;
}s;

int isEmpty()
{
	if(s.Top == -1)
		return 1;
	return 0;
}

int isFull()
{
	if(s.Top == 99)
		return 1;
	return 0;
}

void push(int x)
{
	if ( isFull())
	{
		cout<<endl<<"Overflow, please free some space...";
		return;
	}
	s.val[++s.Top] = x;
}

int pop()
{
	if ( isEmpty())
	{
		cout<<endl<<"Underflow, please insert some items...";
		return -1;
	}
	return s.val[s.Top--];
}

void peek()
{
	if ( isEmpty())
	{
		cout<<endl<<"Stack is empty, please insert some items...";
		return;
	}
	cout<<endl<<s.val[s.Top];
}

void bottomPush(int x)
{
	if(isFull())
	{
		cout<<endl<<"Cannot insert item at bottom, not enough space...";
		return;
	}
	if(isEmpty())
	{
		push(x);
		return;
	}
	int y= pop();
	bottomPush(x);
	push(y);
}

int main()
{
	s.Top = -1;
	push(5);
	push(3);
	push(2);
	bottomPush(6);
	peek();
	pop();
	peek();
	pop();
	peek();
	pop();
	peek();
	pop();
	peek();
	pop();
}