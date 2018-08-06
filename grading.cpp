#include<iostream>
using namespace std;
class Person
{
    public: char name[10];
            int age;
    public: void getData();
            void putData();
};
void Person::getData()
{
    cout<<"\nEnter the Name:";
    cin>>name;
    cout<<"\nEnter the age:";
    cin>>age;
}
void Person::putData()
{
    cout<<"\nName of the Person:"<<name;
    cout<<"\nAge of the Person:"<<age;
}
int main()
{
    Person P;
    P.getData();
    P.putData();
    return 0;
}
