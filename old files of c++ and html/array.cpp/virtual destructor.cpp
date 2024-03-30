#include<iostream>
using namespace std ;
class abc
{
    public:
   virtual ~abc(){

    }

};
class cde:public abc{
    public:
    ~cde()
    {
        
    }

};
int main()
{
abc *bptr;
cde obj;
bptr=&obj;
return 0;
}