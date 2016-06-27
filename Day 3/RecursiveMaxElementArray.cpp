#include<iostream>
#include<stdio.h>

using namespace std;

int maxarray(int arr[],int N,int max)
{
	if(N == -1)
		return max;
	
	if(arr[N] > max)
		max = arr[N];
		
	return maxarray(arr, N-1, max);
}

int main()
{
	int arr[] = {1, 2, 3, 4};
	int max = arr[0];
	
	max = maxarray(arr,3,max);
	cout << max;
}