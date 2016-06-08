#include <iostream>
using namespace std;


int split(int a[], int low, int mid, int high)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    int count=0;
    while (i <= mid && j <= high)
    {
        if (a[i] > a[j])
        {
            c[k] = a[j];
            k++;
            j++;
            count+=mid-i+1;
        }
        else
        {
        	c[k]=a[i];
        	k++;
        	i++;
        }
    }
    while (i <= mid)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = a[j];
        k++;
        j++;
    }
        
  return count;
}

int count(int a[], int low, int high)
{
    int mid,x,y,z;
    if(low>=high) return 0;
    if (low < high)
    {
        mid=(low+high)/2;
        x= count(a,low,mid);
        y=count(a,mid+1,high);
        z=split(a,low,mid,high);
    }
    return x+y+z;
}

int main()
{
    int A[]={1,20,6,4,5};
	
	cout<<"Inversions:"<<count(A,0,4);
 }
