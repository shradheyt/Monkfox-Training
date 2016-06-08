#include<iostream>
using namespace std;

int rotatedSearch(int a[],int n,int x)
{
	int mid,low=0,high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		
		if(a[mid]==x)
		return mid;
		
		if(a[mid]<a[high])
		{
			if(x>a[mid+1]&&x<a[high])
			low=mid+1;
			else
			high=mid-1;
		}
		else
		{
			if(x>a[low]&&x<a[mid])
			high=mid-1;
			else
			low=mid+1;
		}
	}
	
}

int main()
{
	int x;
	int A[]={4,5,6,7,0,1,2};
	cout<<"Enter key:"<<endl;
	cin>>x;
	cout<<"Pos:"<<rotatedSearch(A,7,x);
}
