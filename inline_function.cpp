//
//  main.cpp
//  Inline Function
//
//  Created by Nikhil Tamatta on 21/08/18.
//  Copyright © 2018 Nikhil Tamatta. All rights reserved.
//

#include <iostream>
using namespace std;
class rectangle
{
    public : int l,b;
    public : void getData();
    void area();
};
void rectangle::getData()
{
    cout<<"\nEnter the Length:";
    cin>>l;
    cout<<"\nEnter the Breadth:";
    cin>>b;
}
inline void rectangle::area()
{
    cout<<"\nArea of Rectangle:="<<l*b;
}
int main()
{
    rectangle r1,r2,r3;
    r1.getData();
    r1.area();
    r2.getData();
    r2.area();
    r3.getData();
    r3.area();
}
