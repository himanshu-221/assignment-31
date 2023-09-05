/*- In a bank, different customers have savings account. Some customers may have taken a 
loan from the bank. So bank always maintain information about bank depositors and borrowers.
Design a Base class Customer (name, phone-number). Derive a class 
Depositor(accno, balance) from Customer.
Again, derive a class Borrower (loan-no, loan-amt) from Depositor.
Write necessary member functions to read and display the details of ‘n’ customers.*/

#include<iostream>
#include<cstring>
using namespace std;
class Borrower;
class customer
{
    protected:
        string name;
        long long PhNo;
    public:
        void set()
        {
            cout<<"\nEnter customer's name \t";
            cin>>name;
            cout<<"Enter customer's Ph. no.\t";
            cin>>PhNo;
        }
};
class Depositor : public customer
{
    protected:
        unsigned int AcNo;
        double balance;
    public:
        void setdata()
        {
            cout<<"\nEnter customer's A/c no.\t ";
            cin>>AcNo;
            cout<<"\nEnter A/c balance\t ";
            cin>>balance;
        }
};
class Borrower : public Depositor
{
    int loan_no;
    float loan_amt;
    public:
    void setdata2()
    {
        cout<<"\nEnter loan no.\t ";
        cin>>loan_no;
        cout<<"\nEmter loan amount\t";
        cin>>loan_amt;
    }
    void show()
    {
        cout<<"\n--------------------------------------\n";
        cout<<"Customer name \t\t"<<name;
        cout<<"\nCustomer Phone no.\t"<<PhNo;
        cout<<"\nCustomer A/c no.\t"<<AcNo;
        cout<<"\nA/c Balance\t\t"<<balance;
        cout<<"\n.......................................\n";
        cout<<"\nLoan No.\t\t "<<loan_no;
        cout<<"\nLoan Amount \t\t"<<loan_amt;
    }
};

int main()
{
    int n,i;
    Borrower *b1;
    cout<<"Enter no. of customer details you want to enter\n";
    cin>>n;
    b1 = new Borrower[n];
    for(i=0;i<n;i++)
    {
        b1[i].set();
        b1[i].setdata();
        b1[i].setdata2();
        cout<<"\n--------------------------------------\n";
    }
    for(i=0;i<n;i++)
    {
        b1[i].show();
    }
    delete b1;
    return 0;
}