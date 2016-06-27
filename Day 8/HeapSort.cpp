#include<iostream>
using namespace std;

void HEAPIFY(int a[],int i,int heapsize)
{
	int l=2*i;
	int r=2*i+1;
	int largest;
	
	if(l<=heapsize && a[l]>a[i])
	largest=l;
	else
	largest=i;
	
	if(r<=heapsize && a[r]>a[largest])
	largest=r;
	
	if(largest!=i)
	{
		int temp=a[i];
		a[i]=a[largest];
		a[largest]=temp;
		HEAPIFY(a,largest,heapsize);
	}
	
}

void buildheap(int a[],int n)
{

	
	for(int i=n/2;i>0;i--)
	{
		HEAPIFY(a,i,n);
	}
	
}

void heapsort(int a[],int n)
{
	buildheap(a,n);
	
	for(int i=n;i>=2;i--)
	{
		int temp=a[i];
		a[i]=a[1];
		a[1]=temp;
		n=n-1;
		HEAPIFY(a,1,n);
	}
}

void display(int a[],int n)
{
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main()
{
  int A[]={0,1,4,2,6,3,8,5};
  heapsort(A,7);
  display(A,7);	
  
  
}
