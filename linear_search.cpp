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
    cout<<"\nEnter the element you want to search:";
    cin>>n;
    for(i=0;i<k;i++)
    {
        if(n==a[i])
        {
            k=i;
            cout<<"\n"<<n<<" Exist at location "<<k<<" in the array";
        }

    }
}
