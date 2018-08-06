#include<iostream>
using namespace std;
int main()
{
    int n,r,e,a;
    cout<<"Total no. of newspaper:200";
    cout<<"\nNo. of newspaper sold before 7pm:";
    cin>>n;
    a=200-n;
    cout<<"\nNo. of newspaper sold after 7pm:"<<a;
    e=200*1.50;
    r=(n*2.50)+(a*0.75);
    cout<<"\nTotal Expenditure:"<<e;
    cout<<"\nTotal Revenue:"<<r;
    if(r>e)
        cout<<"\nProfit";
    else
        cout<<"\nLoss";
}
