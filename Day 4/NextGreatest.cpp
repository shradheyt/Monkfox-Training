#include<iostream>
#define size 100
using namespace std;
int top=0;
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
void nextGreatest(int a[],int n)
{
	int s[n];
	s[top]=a[0];
	int i=0;
	if(isEmpty(s)==true||a[i]<s[top])
		{
		
		    push(s,a[i]);
	    }
	    
	for(i=1;i<n;i++)
	{
		
	    while(isEmpty(s)==false&&a[i]>s[top])
	    {
	    	int y= pop(s);
	    	cout<<"next greater of "<<top<<"is"<<a[i]<<endl;
	    }
	    push(s,a[i]);
	}
	while(isEmpty(s))
	{
		int x=pop(s);
		cout<<"next greater of "<<x<<"is"<<"null"<<endl;
	}
	
}

int main()
{
    
		int arr[]={11, 13, 21, 3};
		nextGreatest(arr,4);
	
}
