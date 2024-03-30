#include<iostream>
using namespace std;
class account
{
    long account_number;
    string account_name;
    int number;
    float deposited_amount;
    char *accounttype[3]={"fixed,saving,current"};
    public:
    void write_account();
    void show_account(int);
    void modify_account(int);
    void depposit_amount(int);
    void withdraw_amount(int);
    void report() const;
    int returnaco() const;
    int return_depsit() const;
    char return_type() const;
};
00void account::write account()
{
    cout<<"Enter the account number:";
    cin>>account_number;
    cout<<"Enter account name:";
    cin>>account_name;
    cout<<"Enter the deposited amount:";
    cin>>deposited_amount;
    cout<<"Enter the number 0 for fixed ,1for savings,2 for current:";
    cin>>number;
}
void account::show_account(){
    cout<<"Account number is :"<<account_number<<endl;
    cout<<"Account name is:"<<account_name<<endl;
    cout<<"deposited amount is:"<<deposited_amount<<endl;
    cout<<"account type is:"<<account_type(number)<<endl;
int main