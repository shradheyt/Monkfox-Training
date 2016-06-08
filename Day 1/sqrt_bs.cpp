#include<iostream>
using namespace std;

int bs_sqrt(int x)
{
	if(x==0) return 0;
	if(x==1) return 1;
	
	int low=0,high=x,mid,first=-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(mid*mid==x)
		return mid;
		else if(mid*mid<x)
		{
			first=mid;
			low=mid+1;
		}
		else
		high=mid-1;
		
		
	}
	return first;
	
	
}
int main()
{
	int value,x;
	cout<<"Enter a number:"<<endl;
	cin>>x;
	value=bs_sqrt(x);
	cout<<value;
	
	
}
