#include<iostream>
using namespace std;

int deserving(int arr[],int low,int high,int key)
{
	if(low>high) return 0;
	
	int mid,pos;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==key)
		return mid;
		else if(arr[mid]>key)
		{
			pos=mid;
			high=mid-1;
		}
		else
		low=mid+1;
		
	}
	return pos;
	
	
}
int main()
{
	int A[]={1,3,4,5,7,17,28,39};
	int x;
	cout<<"Enter key:"<<endl;
	cin>>x;
	cout<<"Position should be:"<<deserving(A,0,7,x);
	
	
	
}
