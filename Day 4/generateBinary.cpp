#include<iostream>
#include<string>
#define MAX 100

using namespace std;
string q[MAX];
int front=-1,rear=-1;
int enqueue(string x)
{

	if(front==-1)
	front=0;
	if(rear==MAX)
	{
		cout<<"Overflow"<<endl;
		return 0;
	}
	else
	{
		rear++;
		q[rear]=x;
	}
}
int dequeue()
{
	
	if(front==rear+1|| front==-1)
	{
		cout<<"Underflow";
		return 0;
	}
	else
	{
	//	int temp=q[front];
		front++;
    }
	
	
}

void generateBinary(int n)
{
	enqueue("1");
	
	while(n--)
	{
		string s1;
		s1=q[front];
		dequeue();
		cout<<s1<<endl;
		
		string s2=s1;
		
		enqueue(s1.append("0"));
		enqueue(s2.append("1"));
		
	}
	
}

int main()
{
	
	
int n=5;
generateBinary(n);	
}
