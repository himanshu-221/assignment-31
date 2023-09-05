/*Write a C++ program to define a base class Item (item-no, name, price). Derive a class
Discounted-Item (discount-percent). A customer purchases 'n' items. Display the item-wise bill
and total amount using appropriate format.*/
#include <iostream>
#include <cstring>
using namespace std;

class Item
{
protected:
    int item_no;
    string item_name;
    float item_price;

public:
};
class DiscountedItem : public Item
{
public:
    float Discount_percent;
    float Discount_price;
    float Final_amount;

    void input()
    {
        cout << "\n-------------------\n";
        cout << "\nEnter item name  :  ";
        cin >> item_name;
        cout << "\nEnter item no.  :  ";
        cin >> item_no;
        cout << "\nEnter item Price  :  ";
        cin >> item_price;
        cout << "\nEnter Discount percent  :  ";
        cin >> Discount_percent;
    }

    void GenerateBill()
    {
        cout << "-------------------------\n";
        cout << "Item name : " << item_name;
        cout << "\nItem no. : " << item_no;
        cout << "\nItem price : " << item_price;
        Discount_price = (item_price * Discount_percent / 100);
        Final_amount = (item_price - Discount_price);
        cout << "\nDiscounted Price : " << Final_amount;
        cout << "\n";
    }
};
int main()
{
    int i, n;
    int tp=0,td=0;
    cout << "Enter how many items  :  ";
    cin >> n;
    DiscountedItem Ditm[10];
    for (i = 1; i <= n; i++)
    {
        Ditm[i].input();
    }
    for (i = 1; i <= n; i++)
    {
        Ditm[i].GenerateBill();
    }
    for(i=1;i<=n;i++)
    {
        tp += Ditm[i].Final_amount + Ditm[i].Discount_price; 
        td += Ditm[i].Discount_price;
    }
    cout<<"\n-------------------------"<<endl;
    cout<<"Total price = "<<tp<<"\nTotal discount = "<<td<<endl;
    cout<<"Total payable amount = "<<tp-td<<endl;
    return 0;
}