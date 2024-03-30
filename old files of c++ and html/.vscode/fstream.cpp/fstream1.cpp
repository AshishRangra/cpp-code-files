#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string st="ashish rangra";
    string st2;
  //  opening file using constructor and writing   it
    ofstream out("1.txt");
    out<<st;
    out.close();
    //cout<< st;
    ifstream in("1.txt");
   
   //in>>st2;
   //in>>st;
   getline(in,st);
    cout<<st;

    return 0;
}