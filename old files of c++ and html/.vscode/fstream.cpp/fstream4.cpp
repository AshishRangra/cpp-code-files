#include<iostream>
#include<fstream>
#include<string>

using namespace std ;
class book
{
    int book_no;
    string book_name;
    string book_author;
    string publisher_name;
    int edition_no;
    float price;
    public:
    void set_book_details();
    void display_book_details();
    void store_book_details();
    void display_all_detail();
};
void book::set_book_details(){
    cout<<"Enter book no:  ";
    cin>>book_no;
    cout<<"Enter book name:  ";
    cin>>book_name;
    cout<<"Enter name of book author:  ";
    cin>>book_author;
    cout<<"Enter book publisher name:   ";
    cin>>publisher_name;
    cout<<"Enter price of book:  ";
    cin>>price;
display_all_detail();
}
void book::display_book_details(){
    cout<<"book no. is:  "<<book_no<<endl;
    cout<<"book name. is:  "<<book_name<<endl;
    cout<<"book author name. is:  "<<book_author<<endl;
    cout<<"book publisher is:  "<<publisher_name<<endl;
cout<<"book price is:  "<<price<<endl;
}
void book::store_book_details(){
    ofstream out;
    if(!out){
        cout<<"File data not initialized";
    
    }
    
    else{
        
    out.open("b3.txt",ios::out|ios::app);
    out.write((char*)this,sizeof(*this));

    out.close();
    }
}
void book::display_all_detail()
{
    ifstream in;
    if(!in)
    {
        cout<<"'\n'File not found";

    }
    else{
        book b3;
        in.open("b3.txt",ios::app|ios::binary);
        in.read((char*)this,sizeof(*this));
        while (in.eof()){
            b3.display_book_details();
             in.read((char*)this,sizeof(*this));
             in.close();
        }
        

    }
}
int main()
{
book obj_1;
obj_1.set_book_details();
obj_1.display_book_details();
obj_1.store_book_details();
obj_1.display_all_detail();
return 0;
}