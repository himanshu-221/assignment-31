#include<iostream>
#include<cstring>
using namespace std;

class Employee
{
    public:
        int emp_code;
        string emp_name;
    public:
        void setdata()
        {
            cout<<"\n------------------------\n";
            cout<<"Enter employee code \t";
            cin>>emp_code;
            cout<<"Enter employee name \t";
            cin>>emp_name;
        }

};

class Full_Time : public Employee
{
    private:
        float daily_rate,salary=0;
        int days;
    public:
        void setfulltime()
        {
            cout<<"Enter daily rate\t ";
            cin>>daily_rate;
            cout<<"Enter no. of day's\t ";
            cin>>days;
            salary = (daily_rate*days);
            cout<<"\n------------------------\n";
        }

        void showDetails()
        {
            cout<<"\n-----------------------------\n"<<endl;
            cout<<"Employee Number\t"<<emp_code<<endl;
            cout<<"Employee Name\t"<<emp_name<<endl;
            cout<<"Employee Salary\t"<<salary<<endl;
            cout<<"Employee Status\tFulltime"<<endl;
            cout<<"-------------------------------\n";
        }

};

class Part_Time : public Employee
{
    private:
        int working_hour;
        float h_rate, salary=0;
    public:
        void setparttime()
        {
            cout<<"Enter hourly rate\t ";
            cin>>h_rate;
            cout<<"Enter working hour\t ";
            cin>>working_hour;
            salary = (working_hour*h_rate);
            cout<<"\n-------------------------\n";
        }

        void showDetails()
        {
            cout<<"\n-----------------------------\n"<<endl;
            cout<<"Employee Number\t"<<emp_code<<endl;
            cout<<"Employee Name\t"<<emp_name<<endl;
            cout<<"Employee Salary\t"<<salary<<endl;
            cout<<"Employee Status\tParttime"<<endl;
            cout<<"-------------------------------\n";
        }
};
void Header()
{
    cout<<"\n1. Enter record\n";
    cout<<"2. Display record\n";
    cout<<"3. Search record\n";
    cout<<"4. Quit\n\n";
    cout<<"Enter your choice : \n";
}

int main()
{
    int i,n,var=0,var1=0;
    Full_Time ft[10];
    Part_Time pt[10];
    do
    {
        Header();
        cin>>n;
        switch (n)
        {
        case 1:
            int x; 
            cout<<"\n1. For FullTime Employee";
            cout<<"\n2. For PartTime Employee\t";
            cin>>x;
            switch(x)
            {
                case 1:
                    ft[var].setdata();
                    ft[var].setfulltime();
                    var++;
                    break;
                case 2:
                    pt[var1].setdata();
                    pt[var1].setparttime();
                    var1++;
                    break;
            }
            break;
        case 2:
            //Display record
            for(i=0;i<var;i++)
            {
                ft[i].showDetails();
            }
            for(i=0;i<var1;i++)
            {
                pt[i].showDetails();
            }
            break;
        case 3:
            //Search record
            int num;
            cout<<"Enter Employee no.\t ";
            cin>>num;
            for(i=0;i<var;i++)
            {
                if(ft[i].emp_code == num)
                {
                    ft[i].showDetails();
                }
            }
            for(i=0;i<var1;i++)
            {
                if(pt[i].emp_code == num)
                {
                    pt[i].showDetails();
                }
            }
            break;
        case 4:
            //Quit
            cout<<"\nThank you!\n";
            break;
        default:
            cout<<"Enter valid argument";
            break;
        }
    }
    while(n!=4);
return 0;
    
}
