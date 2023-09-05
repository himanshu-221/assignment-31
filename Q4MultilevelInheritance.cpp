/*Write a C++ program to design a base class Person (name, address, phone_no). Derive 
a class Employee (eno, ename) from Person. Derive a class Manager (designation, 
department name, basic-salary) from Employee. Write a menu driven program to:
a. Accept all details of 'n' managers.
b. Display manager having highest salary
*/

#include<iostream>
#include<cstring>
using namespace std;

class Person
{
    protected:
        string name;
        string address;
        long long int phone_no;
    public:
        

};

class Employee : public Person
{
    public:
        unsigned int eno;
        string ename;

};

class Manager : public Employee
{
    public:
        string designamtion;
        string department_name;
        float basic_salary;
    public:
        void set()
        {
            cout<<"Eneter manager details......\n";
            cout<<"Enter Employee no.\t: ";
            cin>>eno;
            cout<<"\nEnter name\t: ";
            cin>>ename;
            cout<<"\nEnter Address\t: ";
            cin>>address;
            cout<<"\nEnetr phone no.\t: ";
            cin>>phone_no;
            cout<<"\nEnter Designation\t: ";
            cin>>designamtion;
            cout<<"\nDepartment name\t: ";
            cin>>department_name;
            cout<<"\nEnter Basic salary\t: ";
            cin>>basic_salary;
            cout<<"\n";
        }
        void display()
        {
            cout<<"\nManager with highest salary is : ";
            cin>>this->basic_salary;
            cout<<"\nAnd, Manager name is : ";
            cin>>this->ename;
        }
        float getdata()
        {
            return this->basic_salary;
        }
};
int main()
{
    int n,temp;
    cout<<"Enter how many managers detail you want to store\n";
    cin>>n;
    Manager man[100];
    for(int i=1;i<=n;i++)
    {
        man[i].set();
    }
    temp=0;
    for(int i=1;i<=n;i++)
    {
        if(man[temp].basic_salary < man[i].basic_salary)
        temp=i;
    }
    cout<<"\nManager with highest salary is: "<<man[temp].basic_salary<<endl;
    cout<<"\nAnd, Manager name is: "<<man[temp].ename<<endl;
    return 0;
}