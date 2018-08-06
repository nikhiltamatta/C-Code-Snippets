#include<iostream>
using namespace std;
class temperature
{
    public: int t,f,c;
    public: void getData();
            void putData();
};
void temperature::getData()
{
   cout<<"\nEnter temperature in Celcius:";
   cin>>t;
}
void temperature::putData()
{
    f=(9*t)/5+32;
    cout<<"\nTemperature in Fahrenheit:"<<f;
    c=((f-32)*5)/9;
    if(c==t)
        cout<<"\nSame:";
    else
        cout<<"\nNot Same:";
}
int main()
{
    temperature a;
    a.getData();
    a.putData();
    return 0;
}
