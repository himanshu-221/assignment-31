/*Write a C++ program to demonstrate how a common friend function can be used to 
exchange the private values of two classes. (Use call by reference method).*/
#include<iostream>
using namespace std;
class B;
class A
{
    private:
        int a;
    public:
        A()
        {
            a=20;
        }
        void show()
        {
            cout<<"\nValue of no. 1 = "<<a<<endl;  
        }
        friend void swap(A &a, B &b);
    
};
class B
{
    private:
        int b;
    public:
        B()
        {
            b=10;
        }
        void show()
        {
            cout<<"\nValue of no. 2 = "<<b<<endl;  
        }
        friend void swap(A &a, B &b);
};

void swap(A &no1, B &no2)
{
    int no3;
    no3 = no1.a;
    no1.a = no2.b;
    no2.b = no3;
}
int main()
{
    A a;
    B b;
    swap(a,b);
    a.show();
    b.show();
    return 0;
}