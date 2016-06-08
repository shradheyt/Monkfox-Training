#include<iostream>
using namespace std;


int power(int a,int b)
{
	if(b==1)
	return a;
	if(b==0)
	return 1;
	
	if(b%2==0)
	{
		int aa=power(a,b/2);
		return aa*aa;
	}
	else
	{
		int bb=power(a,(b+1)/2)*power(a,(b-1)/2);
		return bb;
	}
	
}

int main()
{
	int a,b;
	cout<<"Enter a and b to calculate  a^b:"<<endl;
	cin>>a>>b;
	cout<<power(a,b);
}
