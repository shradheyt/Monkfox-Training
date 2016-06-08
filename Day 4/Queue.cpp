#include<iostream>
#define MAX 100
using namespace std;
int queue[MAX];
int front=-1,rear=-1;
int enqueue(int q[],int x)
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
int dequeue(int q[])
{
	
	if(front==rear+1|| front==-1)
	{
		cout<<"Underflow";
		return 0;
	}
	else
	{
		int temp=q[front];
		front++;
    }
	
	
}

void display(int q[])
{
	for(int i=front;i<=rear;i++)
	{
		cout<<q[i]<<" ";
	}
}


int main()
{
	
	enqueue(queue,12);
	enqueue(queue,13);
	enqueue(queue,25);
	enqueue(queue,2);
	enqueue(queue,3);
	
	dequeue(queue);
	dequeue(queue);
	
	display(queue);
	
	
}
