#include<iostream>
using namespace std;
int main()
{
    int i,j,n,t=0;
    cout<<"Enter the number of element:";
    cin>>n;
    int a[n];
    cout<<"\nEnter thr element in array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nSorted Array:";
    for(i=0;i<n;i++)
    {
        j=0;
        while(j<=n-1)
        {
           if(a[j]>a[j+1])
           {
               t=a[j];
               a[j]=a[j+1];
               a[j+1]=t;
           }
           j=j+1;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<a[i];
    }
    return 0;
}


