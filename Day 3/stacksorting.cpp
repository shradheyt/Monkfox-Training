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
		//cout<<endl<<"Underflow, please insert some items...";
		return -1;
	}
	return s.val[s.Top--];
}

int peek()
{
	if ( isEmpty())
	{
		cout<<endl<<"Stack is empty, please insert some items...";
		return -1;
	}
	cout<<endl<<s.val[s.Top];
	return s.val[s.Top];
}

//My Method, needs to call it n-1 times.

void rsort()
{
	if(isEmpty())
		return;
	
	int x = pop();
	int y = pop();
	if(y == -1)
	{
		push(x);
		return;
	}
	if( x>y )
	{
		push(y);
		rsort();
		push(x);
	}
	else
	{
		push(x);
		rsort();
		push(y);
	}
}

// Sir's method

void sortedinsert(int y)
{
	if( isEmpty() || (peek() <= y))
	{
		push(y);
	}
	else
	{
		int x = pop();
		sortedinsert(y);
		push(x);
	}
}

void sort()
{
	if(isEmpty())
	{
		return;
	}
	else
	{
		int y = pop();
		sort();
		sortedinsert(y);
	}
}

int main()
{
	s.Top = -1;
	push(5);
	push(3);
	push(8);
	
	//rsort();
	sort();
	
	cout<<"\n\nSorted stack elements :\n";
	
	peek();
	pop();
	peek();
	pop();
	peek();
	pop();
}