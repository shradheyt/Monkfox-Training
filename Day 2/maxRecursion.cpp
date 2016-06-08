#include<iostream>
using namespace std;

int s=0;
int max(int arr[],int start,int end)
{
	int mid=0;
	if(start==end) return arr[start];
	mid=(start+end)/2;
	int a=max(arr,start,mid);
	int b=max(arr,mid+1,end); 
	return a>b?a:b;
}

int main()
{
	int arr[]={1,3,4,2,5};
	cout<<max(arr,0,4);
}
