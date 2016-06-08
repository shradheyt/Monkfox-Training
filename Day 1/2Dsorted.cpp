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

int func(int arr[][],int m,int n,int key)
{
	int index=deserving(arr[][m-1],0,m,key);
	return (deserving(arr[index][],0,index,key));
}
int main()
{
	int A[3][3]={1,3,4,5,7,17,28,39,40};
	int x;
	cout<<"Enter key:"<<endl;
	cin>>x;
	cout<<"Position should be:"<<func(A,0,8,x);
	
	
	
}
