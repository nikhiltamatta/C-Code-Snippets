//
//  main.cpp
//  Friend Function
//
//  Created by Nikhil Tamatta on 21/08/18.
//  Copyright © 2018 Nikhil Tamatta. All rights reserved.
//

#include <iostream>
using namespace std;
class PQR;
class XYZ
{
    int m1;
public: void getData();
    friend void display(XYZ,PQR);
};
class PQR
{
    int m1;
public: void getData();
    friend void display(XYZ,PQR);
};
void XYZ::getData()
{
    cout<<"Enter the number :";
    cin>>m1;
}
void PQR::getData()
{
    cout<<"Enter the number :";
    cin>>m1;
}
void display(XYZ x, PQR p)
{
    cout<<"Average :"<<(x.m1+p.m1)/2;
}
int main()
{
    XYZ x1;
    PQR p1;
    x1.getData();
    p1.getData();
    display(x1,p1);
    return 0;
}
