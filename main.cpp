//
//  main.cpp
//  Total Surface are of cubiod
//
//  Created by Nikhil Tamatta on 24/09/18.
//  Copyright © 2018 Nikhil Tamatta. All rights reserved.
//

#include <iostream>
using namespace std;
class cuboid
{
    int l,b,h;
public:cuboid();
    cuboid(int,int,int);
    cuboid(cuboid &c);
};
cuboid::cuboid()
{
    cout<<"Enter Length,Breadth & Width:";
    cin>>l>>b>>h;
    cout<<"\nVolume of Cuboid="<<l*b*h;
    cout<<"\nTotal surface area of cuboid="<<2*((l*b)+(b*h)+(l*b));
}
cuboid::cuboid(int l,int b,int h)
{
    cout<<"\nVolume of Cuboid="<<l*b*h;
    cout<<"\nTotal surface area of cuboid="<<2*((l*b)+(b*h)+(l*b));
}
cuboid::cuboid(cuboid &c)
{
    l=c.l;
    b=c.b;
    h=c.h;
    cout<<"\nVolume of cuboid="<<l*b*h;
    cout<<"\nTotal surface area of cuboid="<<2*((l*b)+(b*h)+(l*h));
}
int main()
{
    cuboid r1,r2(10,10,30),r3(r1);
}
