#include<iostream>
using namespace std;

int s=0;
int sumarray(int a[],int N)
{
	if(N==0) return 0;
	return a[N-1]+sumarray(a,N-1);
}

int main()
{
	int arr[]={1,3,4,2,5};
	cout<<sumarray(arr,5);
}
