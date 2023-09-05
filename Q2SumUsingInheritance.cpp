/*Write a C++ program to add two numbers using single inheritance. Accept these two 
numbers from the user in base class and display the sum of these two numbers in 
derived class.*/
#include<iostream>
using namespace std;
class Base
{
    protected:
        int a,b;
    public:
        void setData()
        {
            cout<<"Enter values for A and B to add\n";
            cin>>a>>b;
        }
};

class Drived : public Base
{
    private:
        int sum;
    public:
        void Sum()
        {
            sum = a+b;
        }
        void display()
        {
            cout<<"Sum of A and B is = "<<sum<<endl;
        }
};
int main()
{
    Drived d;
    d.setData();
    d.Sum();
    d.display();
    return 0;
}