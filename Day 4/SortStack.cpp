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
int sortedInsert(int s[],int y)
{
	if(s[top]<=y||isEmpty(s))
	{
		push(s,y);
		return 0;
	}
	else
	{
		int x=pop(s);
		sortedInsert(s,y);
		push(s,x);
	}
}

int sort(int s[])
{
	if(isEmpty(s))
	return 0;
	else
	{
		int y=pop(s);
		sort(s);
	    sortedInsert(s,y);
	}
}

int main()
{
	int a[100];
    push(a,3);
    push(a,5);
    push(a,8);
    push(a,4);
    //insertAtBottom(a,1);
    sort(a);
    display(a);
		
	
}
