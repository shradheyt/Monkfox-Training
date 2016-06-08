#include<iostream>
using namespace std;
int result1=-1;
int result2=-1;

int first(int arr[],int low,int high,int key)
{
	int mid;
	if(low>high) return 0;
	
	mid=(low+high)/2;
	if(arr[mid]==key)
	{
		result1=mid;
	 first(arr,low,mid-1,key);
	}
	else if(arr[mid]>key)
	{
	 first(arr,low,mid-1,key);
	}
	else
	 first(arr,mid+1,high,key);
	 return result1;
	
}

int second(int arr[],int low,int high,int key)
{
	int mid;
	if(low>high) return 0;
	
	mid=(low+high)/2;
	if(arr[mid]==key)
	{
		result2=mid;
	 second(arr,mid+1,high,key);
	}
	else if(arr[mid]>key)
	{
	 second(arr,low,mid-1,key);
	}
	else
	second(arr,mid+1,high,key);
	return result2;
}
int main()
{
	int A[]={1,1,2,2,2,2,2,3,3,3,4,4,5};
	int k;
	cout<<"Enter key:"<<endl;
	cin>>k;
	int fir=first(A,0,12,k);
	int sec=second(A,0,12,k);
	if(fir==-1)
	{
		cout<<"Count is 0";
	}
	else
	cout<<"Count is:"<<sec-fir+1<<endl;
	
}
