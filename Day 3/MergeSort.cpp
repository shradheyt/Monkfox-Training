#include<iostream>
using namespace std;

void merge(int A[],int left,int mid,int right)
{
    int n1=mid-left+1;
    int n2=right-mid;
	int L[n1],R[n2];
	int k=0;
	for(int i=0;i<n1;i++)
	{
		L[i]=A[left+i];
	}
	
	for(int j=0;j<n2;j++)
	{
		R[j]=A[mid+1+j];
	}
	
	int i=0,j=0;
	k=0;
	while(i<n1 && j<n2)
	{
		if(L[i]<=R[j])
		{
			A[k]=L[i];
			i++;
		}
		else
		{
		
	    	A[k]=R[j];
	    	j++;
	   }
	   k++;
	}
	
	while(i<n1)
	{
		A[k++]=L[i++];
		
	}
	while(j<n2)
	{
		A[k++]=R[j++];
	}
	
	
	
}


void mergesort(int A[],int left,int right)
{
	int mid;
	if(left<right)
	{
		mid=left+(right-left)/2;
		mergesort(A,left,mid);
		mergesort(A,mid+1,right);
		merge(A,left,mid,right);
	}

	
}



int main()
{
	int A[]={7,6,5,3,1,2,3,2};
	mergesort(A,0,7);
	for (int i=0; i < 8; i++)
     cout<<A[i]<<" ";
}
