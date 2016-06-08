#include<iostream>
using namespace std;

int s=0;
int sumarray(int arr[],int start,int end)
{
	int mid=0;
	if(start==end) return arr[start];
	mid=(start+end)/2;
	return sumarray(arr,start,mid) + sumarray(arr,mid+1,end); ;
}

int main()
{
	int arr[]={1,3,4,2,5};
	cout<<sumarray(arr,0,4);
}
