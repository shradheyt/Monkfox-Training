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

void pop()
{
	if ( isEmpty())
	{
		cout<<endl<<"Underflow, please insert some items...";
		return;
	}
	s.Top--;
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

int main()
{
	s.Top = -1;
	push(5);
	push(3);
	peek();
	pop();
	peek();
	pop();
	peek();
	pop();
}