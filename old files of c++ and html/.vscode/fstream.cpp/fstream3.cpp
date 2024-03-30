#include<iostream>
#include<fstream>

using namespace std ;
int main()
{
ofstream out;
out.open("1a.txt");
out<<"This is me ";
out<<"this is me also";
out.close();
ifstream in;
in.open("1a.txt");
string st;
// in>>st ;
// cout<<st;
while(in.eof()==0){
    getline(in,st);
    cout<<st;
}
in.close();

return 0;
}