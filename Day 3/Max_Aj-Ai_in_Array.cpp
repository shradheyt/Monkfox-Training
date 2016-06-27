//Max[Aj - Ai] , where j>i in array.

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	int n, max = -9999, min = 9999, dif = 0;
	cin>>n;
	
	int a[n];
	
	for ( int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"\n\n";
	
	min = a[0];
	for(int i=1;i<n;i++)
	{
		dif = a[i] - min;
		
		if( dif > max)
			max = dif;
		if( a[i] < min)
			min = a[i];
		
	}
	
	cout<<max;
}