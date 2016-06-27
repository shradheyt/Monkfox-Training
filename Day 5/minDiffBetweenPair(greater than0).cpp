#include<iostream>
#include<algorithm>
using namespace std;


int minDiff(int a[],int n)
{
	sort(a,a+n);
	int diff=9999999;
	for(int i=0;i<n;i++)
	{
		if(a[i+1]-a[i]<diff)
		diff=a[i+1]-a[i];
	}
	return diff;
}

int main()
{
	int A[]={3,9,1,6,5,4};
	cout<<minDiff(A,6);
}
