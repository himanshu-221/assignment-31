/*Write a C++ program to calculate the percentage of a student using multi-level 
inheritance. Accept the marks of three subjects in base class. A class will be derived 
from the above mentioned class which includes a function to find the total marks 
obtained and another class derived from this class which calculates and displays the 
percentage of students.*/
#include<iostream>
using namespace std;
class Base
{
    protected:
        int sub1,sub2,sub3;
    public:
       void setData()
       {
        cout<<"Enter marks of Student \n";
        cin>>sub1>>sub2>>sub3;
       }
       void Display()
       {
            cout<<"Marks in Sub1 , Sub2 and Sub3 are :-\n"<<sub1<<"/100\n"<<sub2<<"/100\n"<<sub3<<"/100\n";
       }
};
class A : public Base
{
    protected:
        int sum;
    public:
        void Sum()
        {
            sum = sub1 + sub2 + sub3;
            cout<<"Total marks :- "<<sum<<"/300\n";
        }
};
class Child : public A
{
    private:
        float per;
    public:
        void Percentage()
        {
            per = (float)100*sum/300;
            cout<<"Percentage is :- "<<per<<endl;
        }
};
int main()
{
    Child c1;
    c1.setData();
    c1.Display();
    c1.Sum();
    c1.Percentage();
    return 0;
}