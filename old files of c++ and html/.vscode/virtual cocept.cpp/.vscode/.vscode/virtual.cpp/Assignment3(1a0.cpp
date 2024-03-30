#include<iostream>
#include<string>
using namespace std;
class Account
{ 
    string name;
    int account_number;
    
    string account_type;
    public:
    float deposited_amount;
    void create_account()
    {
        cout<<"Enter the account number";
        cin>>account_number;
        cout<<"Enter the  name of account holder:";
        cin>>name;
        cout<<"Enter the deposited amount:" ;
        cin>>deposited_amount;
        cout<<"Enter the account type";
        cin>>account_type;
    }
    void show_account()
    { 
        cout<<"Account number is:"<<account_number<<endl;
        cout<<"Account holder:"<<name<<endl;
        cout<<"Deposited amount is:"<<deposited_amount<<endl;
        cout<<"Account type:"<<account_type<<endl;
    }
    void modify_account()
    { 
        int a;
    cout<<"Do you want the re-enter the account holder name: ";
    cin>>a;
    if (a==1)
    {
	cout<<"enter the account holder name again: ";
	cin>>name;
	cout<<"Modified data is:"<<endl;
    }

    }
    void deposit_amount(int money){
        
        deposited_amount=deposited_amount+money;
    }
    void withdraw_amount(int Money)
    {
       deposited_amount=deposited_amount-Money;
    }
    void report() const
    {
        
        cout<<account_type<<" "<<name<<" "<<account_number<<"   "<<deposited_amount<<endl;
    
    }
    int returnacno() const{
        return account_number;
    }
    int return_deposit()const
    {
        return deposited_amount;
    }
    string return_type() const
    {
        return account_type;
    }
        };
        int main()
        {
            cout<<"................BANKING........................"<<endl;
        Account obj_1;
        obj_1.create_account();
        obj_1.show_account();
        obj_1.modify_account();
        obj_1.show_account();
        int money;
        cout<<"Enter the amount to be deposited: ";
    cin>>money;
    obj_1.deposit_amount(money);
    obj_1.show_account();
    int Money;
    cout<<"Enter the amount to be deducted:  ";
    cin>>Money;
    obj_1.withdraw_amount(Money);
    obj_1.show_account();
    obj_1.report();
        cout<<"........THANK YOU.......";
        return 0;
      
      }