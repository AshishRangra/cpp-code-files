#include<iostream>
#include<fstream>
using namespace std;
int main()
{
     string st;
     ofstream gout("1.txt");
     //creating a new string and get input by user
     cout<<"Enter your name :  ";
     cin>>st;
    // gout<<st;
     //writing a string to the file
     gout <<st<<" is my name";
     gout.close(); 
      ifstream in("1.txt");
    // string content;
      getline(in,st);//to get full line string then use getline which syntax is: getline(in , variable that you will use(content))
      cout<<"content is :"<<st;
      

     return 0;


}