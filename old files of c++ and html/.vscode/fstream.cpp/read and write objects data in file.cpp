#include<iostream>
#include<fstream>
using namespace std ;
class Book
{
    string name;
    int price;
    public:
    void get_data()
    {
        cout<<"Enter the book name";
        cin>>name;
        cin.ignore();
        cout<<"Enter the book price:";
        cin>>price;
    }
    void showdata()
    {
        cout<<"book is:"<<name<<endl;
        cout<<"price of book is:"<<price<<endl;
    }
    int storebook();
    void viewallbook();
};
int Book ::storebook()
{
    if(price==0)
    {
        cout<<"Book data not initialized";
        return 0;
    }
    else{
        ofstream out;
        out.open("a.txt",ios::app|ios::binary);
        out.write((char*)this,sizeof(*this));
        out.close();
        return 1;
    }
    }
 void Book::viewallbook(){
     ifstream in;
     in.read("a.txt",ios::in|ios::binary);
     if(!in)
     {
         cout<<"\nFile not found";
     }
     else{
         in.read((char*)this,sizeof(*this));
         while(!in.eof()){
             showdata();
             in.read((char*)this,sizeof(*this));
             }
     in.close();
     }
}   
int main()
{
Book obj_1;
obj_1.get_data();
obj_1.showdata();
obj_1.storebook();
obj_1.viewallbook();
return 0;
}