#include<iostream>
using namespace std;

int sumIsK(int a[],int b[],int n1,int n2,int k)
{
	int i=0;
	int j=n2-1;
	while(i<n1&&j>=0)
	{
		if(a[i]+b[j]==k)
		{
			cout<<a[i]<<" "<<b[j]<<endl;
			return 0;
		}
		else if(a[i]+b[j]>k)
		j--;
		else
		i++;
	}
}

int main()
{
	int A[]={1,2,3,4,5};
	int B[]={3,9,8};
	sumIsK(A,B,5,3,5);
}
