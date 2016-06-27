#include<iostream>
#include<climits>
using namespace std;

void HEAPIFY(int a[],int i,int heapsize)
{
	int l=2*i;
	int r=2*i+1;
	int smallest;
	
	if(l<=heapsize && a[l]<a[i])
	smallest=l;
	else
	smallest=i;
	
	if(r<=heapsize && a[r]<a[smallest])
	smallest=r;
	
	if(smallest!=i)
	{
		int temp=a[i];
		a[i]=a[smallest];
		a[smallest]=temp;
		HEAPIFY(a,smallest,heapsize);
	}
	
}

void buildheap(int a[],int n)
{

	
	for(int i=n/2;i>0;i--)
	{
		HEAPIFY(a,i,n);
	}
	
}

void Insert(int a[],int key,int n)
{
	n++;
    a[n]=key;
	
	while(n>=1)
	{
		if(a[n/2]>a[n])
		{
			int t=a[n/2];
			a[n/2]=a[n];
			a[n]=t;
		}
	}
	
	
}

void display(int a[],int n)
{
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
  int A[]={0,1,4,2,6,3,8,5,INT_MIN};
  buildheap(A,7);
 display(A,7);	
 Insert(A,7,7);
 display(A,8);
}
