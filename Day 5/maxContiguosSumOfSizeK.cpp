#include<iostream>
using namespace std;

int maxSumK(int a[],int n,int k)
{
	int sum=0;
	int max;
	for(int i=0;i<n-k+1;i++)
	{
		max=a[i];
		for(int j=1;j<k;j++)
		{
			if(a[i+j]<sum)
			{
				max=a[i+j];
			}
		}
	}
	return max;
}


int main()
{
	int k=3;
	int A[]={9,7,8,4,3,11,12,28};
	cout<<maxSumK(A,8,k);
	
	
}
