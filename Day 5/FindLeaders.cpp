#include<iostream>
using namespace std;

int findLeaders(int a[],int n)
{
	int i=n-1,leader;
	while(1)
	{
		if(a[i]<a[i-1])
		{
		
			leader=a[i];
			cout<<leader<<" ";
			i--;
		}
		else
		{
			cout<<a[i];
			return 0;
		}
	}
}
int main()
{
	int A[]={9,7,8,4,13,11,1};
	findLeaders(A,7);
}
