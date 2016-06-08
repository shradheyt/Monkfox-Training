#include<stdio.h>

int main()
{
	int a[6]={4,-5,3,2,0,1};
	int i,n=6,ans,t;
	int in=0,ex=0;	

	for(i=0;i<n;i++)
	{
		if(in>ex)
			t=in;
		else
			t=ex;
		in=ex+a[i];
		ex=t;
	}
	
	if(in>ex)
		ans=in;
	else
	ans=ex;
	
	printf("%d",ans);
}
