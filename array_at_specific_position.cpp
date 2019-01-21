#include<iostream>
using namespace std;
int main()
{
    int i,k,n,m;
    cout<<"Enter the number of element:";
    cin>>k;
    int a[k];
    cout<<"\nEnter the array;";
    for(i=0;i<k;i++)
    {
        cin>>a[i];
    }
    cout<<"\nArray:";
    for(i=0;i<k;i++)
    {
        cout<<"\n"<<a[i];
    }
    cout<<"\nEnter the position where you want to enter a new element:";
    cin>>m;
    cout<<"\nEnter new element you want to add:";
    cin>>n;
    for(i=k;i>=m;i--)
    {
        a[i+1]=a[i];
    }
    a[m]=n;
    cout<<"\nNew array:";
    for(i=0;i<k+1;i++)
    {
        cout<<"\n"<<a[i];
    }
}
