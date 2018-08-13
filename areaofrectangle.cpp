#include<iostream>
using namespace std;
class Rectangle
{
    public: int length;
            int breadth;
    public: void getData();
    public: void putData();
};
void Rectangle:: getData()
{
    cout<<"\nEnter the length of the Rectangle :";
    cin>>length;
    cout<<"\nEnter the breadth of the Rectangle :";
    cin>>breadth;
}
void Rectangle:: putData()
{
    int peri=2*(length+breadth);
    int area=length*breadth;
    cout<<"\nPerimeter of Rectangle ="<<peri;
    cout<<"\nArea of Rectangle ="<<area;
}
int main()
{
    Rectangle r1;
    r1.getData();
    r1.putData();
    return 0;
}
