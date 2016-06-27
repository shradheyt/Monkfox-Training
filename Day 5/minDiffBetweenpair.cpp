#include<iostream>
using namespace std;

int max(int a[],int n)
{
	int max=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	return max;
	
}

int min(int a[],int n)
{
	int min=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	return min;
	
}

int minDiff(int a[],int n)
{
	return min(a,n)-max(a,n);
}

int main()
{
	int A[]={3,9,1,6,5,4};
	cout<<minDiff(A,6);
	
	
}
