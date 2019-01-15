#include<iostream>
using namespace std;
int main()
{
    int n,i,m,v;
    cout<<"Enter the number of elements:-";
    cin>>n;
    int a[n+1];
    cout<<"\nEnter elements:-";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"n="<<n;
    cout<<"\nElements:-";
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<a[i];
    }

    cout<<"\nEnter the value to be deleted:-";
    cin>>v;
    for(i=0;i<n;i++)
    {
        if(v==a[i])
        {
            m=i;
        }
    }
    for(i=n-1;i>=m-1;i--)
    {
        a[i+1]=a[i];
    }
    for(i=0;i<(n+1);i++)
    {
        cout<<"\n"<<a[i];
    }

}

