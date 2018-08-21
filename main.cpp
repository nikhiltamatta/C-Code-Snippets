//
//  main.cpp
//  Nesting
//
//  Created by Nikhil Tamatta on 21/08/18.
//  Copyright © 2018 Nikhil Tamatta. All rights reserved.
//

#include <iostream>
using namespace std;
class student
{
    int m1,m2,m3;
    public : void getData();
    int average();
    void display();
};
void student::getData()
{
    cout<<"Enter the marks of 3 students :";
    cin>>m1>>m2>>m3;
}
int student::average()
{
    int avg=(m1+m2+m3)/3;
    return avg;
}
void student::display()
{
    cout<<"Average="<<average();
}
int main()
{
    student s1;
    s1.getData();
    s1.display();
    return 0;
}

