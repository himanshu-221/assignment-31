/*Consider two base classes
worker(int code, char name, float salary),
officer(float DA, HRA)
class manger(float TA(is 10% of salary), gross salary) is derived from both base classes.
Write necessary member functions.*/

#include<iostream>
#include<cstring>
using namespace std;

class Worker
{
    protected:
        int code;
        string name;
        float salary;
    protected:
        void set()
        {
            cout<<"Enter Worker information\n";
            cout<<"\n-------------------------------";
            cout<<"\nEnter Code\t ";
            cin>>code;
            cout<<"\nEnter name\t ";
            cin>>name;
            cout<<"\nEnter salary\t ";
            cin>>salary;
        }
        void display()
        {
            cout<<"\nCode\t "<<code;
            cout<<"\nName\t "<<name;
            cout<<"\nSalary\t "<<salary;
        }
};
class Officer
{
    protected:
        float DA,HRA;
    protected:
        void setdata()
        {
            cout<<"\nEnter DA\t ";
            cin>>DA;
            cout<<"\nEnter HRA\t ";
            cin>>HRA;
        }
};
class Manager : public Officer , public Worker
{
    float TA,gross_salary=0;
    public:
        void cal()
        {
            set();
            setdata();
            TA = salary*10/100;
            gross_salary = TA + HRA + DA + salary;
        }
            void show()
            {
                cout<<"\n--------------------------------\n";
                cout<<"\tManager information";
                cout<<"\n--------------------------------";
                display();
                cout<<"\nDA\t "<<DA<<"\nHRA\t "<<HRA;
                cout<<"\nTA\t "<<TA<<"\nGross Salary\t"<<gross_salary;
            }
};

int main()
{
    int n,i;
    cout<<"Enter manger count\t ";
    cin>>n;
    Manager *m1;
    m1 = new Manager[n];
    for(i=0;i<n;i++)
    {
        m1[i].cal();
    }
    for(int i = 0 ; i<n ; i++)
    {
        m1[i].show();
    }
    return 0;
    
}