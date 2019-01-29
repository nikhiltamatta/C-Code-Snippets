/*Implementing Merging of two sorted array*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n1,n2;
    cout<<"Enter the number of element for both array:";
    cin>>n1>>n2;
    int a[n1],b[n2],c[n1+n2];
    cout<<"Enter the element of first array:";
    for(i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element of second array:";
    for(j=0;j<n2;j++)
    {
        cin>>b[j];
        }
        i=j=k=0;
        while(i<n1 && j<n2)
        {
            if(a[i]<=b[j])
            {
                c[k]=a[i];
                i++;
                k++;
            }
            else
            {
                c[k]=b[j];
                j++;
                k++;
            }
        }
        while(i<n1)
        {
                c[k]=a[i];
                i++;
                k++;
        }
        while(j<n2)
        {
                c[k]=b[j];
                j++;
                k++;
        }
        cout<<"\nFinal array:";
        for(i=0;i<(n1+n2);i++)
        {
            cout<<"\n"<<c[i];
        }
        return 0;
    }
