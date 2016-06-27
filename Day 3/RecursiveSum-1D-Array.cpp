#include<iostream>
#include<stdio.h>

using namespace std;

int divsum(int arr[],int l,int r)
{
	if (l == r)
		return arr[l];
		
	int m= (l+r)/2;
	return divsum(arr, l, m) + divsum(arr, m+1  , r);
}

int main()
{
	int arr[] = {1, 2, 3, 4};
	int sum = 0;
	sum = divsum(arr,0,4);
	
	cout<<sum;
}