#include<iostream>
// Max of Sum of all sub arrays in array, excluding adjacent elements in sub array.
// 4 -5 3 2 0 1 , ans =18, sub arrays = 4 3 0 or 4 2 1 or 4 3 1 or -5 2 1 etc...

#include<stdlib.h>

using namespace std;

int main()
{
	int n, inc = 0, exc = 0, t = 0;
	cin>>n;
	
	int a[n];
	
	//For Hashing purpose, we add one index to array, otherwise array size will be n+2, and index will be a[i]-1.
	for ( int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"\n\n";
	
	for(int i=0;i<n;i++)
	{
		t = exc;
		if( inc > exc)		// exc = max{ inc, exc}
		{
			exc = inc;
		}
		
		inc = t + a[i];
	}
	
	if(inc > exc)
		cout<<inc;
	else
		cout<<exc;
	
}