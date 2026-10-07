#include <iostream>
using namespace std;

int main()
{
    cout<<"====THE HUNGRY OVEN CAFE===="<<endl;
    cout<<"1. Pizza : 111"<<endl;
    cout<<"2. Momos : 60"<<endl;
    cout<<"3. Spring Rolls : 60"<<endl;
    cout<<"4. chowmeen : 50 "<<endl;
    
    int choice;
    int price;
    int quantity;
    int total;
    
    cout<< "Enter the choice:";
    cin>> choice;
    
    cout<< "Enter the quantity:";
    cin>> quantity;
    
    
    if (choice == 1)
           price = 111;
    else if (choice == 2)
           price = 60;
    else if (choice == 3) 
           price = 60;
    else if (choice == 4)   
           price = 50;
    else
    {
        cout << "invalid choice";
        return 0;
    }
    
    total = price * quantity;
    
    cout << "Total price = Rs. " <<total <<endl;
    
    return 0;
}