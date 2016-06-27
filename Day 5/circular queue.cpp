#include<iostream>
#define size 5
using namespace std;
int cqueue[size];
int front=-1,rear=-1;
int count=0;
int enqueue(int data)
{
	
	if((front==size-1)||front==0&&rear==size-1)
	{
		cout<<"Overflow"<<endl;
		return 0;
	}
	
	if(front==-1)
	{
		front=0;
	}
	else
	{
		if(rear==size-1)
		rear=0;
		else
		rear++;
	}
	cqueue[rear]=data;
	
}

int dequeue()
{
	if((front==size-1)||front==0&&rear==size-1)
	{
		cout<<"Underflow"<<endl;
		return 0;
	}
	else
	{
		if(front==size-1)
		front=0;
		else
		front++;
	}
}

int display()
{
	for(int i=front;i<=rear;i++)
	{
		cout<<cqueue[i]<<" ";
	}
}
int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(10);
	enqueue(40);
	enqueue(30);
	enqueue(13);
	display();
}
