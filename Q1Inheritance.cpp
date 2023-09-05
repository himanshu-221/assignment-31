/*Define a class Person with instance members name and age. Also define member 
functions setName(), setAge(), getName(), getAge(). Now define class Employee by 
inheriting Person class. In the Employee class define empid and salary as instance 
members. Also define setEmpid, setSalary, getEmpid, getSalary.*/
#include<iostream>
#include<cstring>
using namespace std;
class Person
{
    private:
        string name;
        int age;
    public:
        void setName(string ch)
        {
            this->name = ch;
        }
        void setAge(int x)
        {
            this->age = x;
        }
        void getName()
        {
            //return name;
            cout<<"Name "<<name;
        }
        void getAge()
        {
            //return age;
            cout<<"\nAge "<<age;
        }
};
class Employee : public Person
{
    private:
        unsigned int EmpID;
        float salary;
    public:
        void setempID(int a)
        {
           this->EmpID = a;
        }
        void setSalary(float x)
        {
            this->salary = x;
        }
        void getEmpID()
        {
            int a = EmpID;
             try{
                if(a<0)
                    throw a;
                else
                    cout<<"EmpID is :- "<<a<<endl;       
            }
            catch(int n){
                cout<<"\nError ! Employee ID could not be negative\n";
            }
        }
        void getSalary()
        {
            cout<<"Salary is :- "<<salary<<endl;
        }
};
int main()
{
    Employee E1;
    E1.setName("Himanshu");
    E1.setAge(23);
    E1.setempID(-1);
    E1.setSalary(70000.0);
    cout<<"\nDetails of Emp. 1 is :- \n";
    E1.getName();
    E1.getAge();
    E1.getEmpID();
    E1.getSalary();
    return 0;
}