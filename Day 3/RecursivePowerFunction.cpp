#include<iostream>
#include<stdio.h>

using namespace std;

int pow(int a, int b)
{
	if(b == 1)
		return a;
	
	int m = b/2;
	if ( b%2 == 0)
		return pow( a, m) * pow( a, m);
		
	return pow( a, m) * pow( a, m+1);
}

int main()
{
	int p = pow(3,4);
	cout << p;
}