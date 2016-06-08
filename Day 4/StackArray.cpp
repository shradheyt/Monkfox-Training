#include<iostream>
#define size 100
using namespace std;

int a[100],top=-1;

void push(int x)
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

void pop()
{
	if(top==-1)
	{
		cout<<"underflow"<<endl;
	}
	else
	{
		int temp=a[top];
		top--;
	}
}

int peek()
{
	return a[top];
}
void display()
{
	for(int i=top;i>=0;i--)
	{
		cout<<a[i]<<endl;
	}
}

int main()
{
    push(3);
    push(5);
    push(8);
    pop();
    display();
		
	
}
