#include<iostream>
using namespace std;

int partition(int A[],int p,int r)
{
	int x=A[r];
	int i=p-1;
	int temp;
	for(int j=p;j<r;j++)
	{
		if(A[j]<=x)
		{
			i=i+1;
			 temp=A[i];
			A[i]=A[j];
			A[j]=temp;
		}
	}
	 temp=A[i+1];
		A[i+1]=A[r];
		A[r]=temp;
	int pos=i+1;
	return pos;
}
void quicksort(int A[],int p,int r)
{ int q;
	if(p<r)
	{
		 q=partition(A,p,r);
		quicksort(A,p,q-1);
		quicksort(A,q+1,r);
	}
	
}

int main()
{
	int A[]={7,6,5,3,1,2,3,2};
	quicksort(A,0,7);
	for (int i=0; i < 8; i++)
     cout<<A[i]<<" ";
	
}
