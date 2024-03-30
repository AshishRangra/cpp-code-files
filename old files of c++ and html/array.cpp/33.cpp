#include<iostream>
using namespace std;
class count
{
     int a;
    public:
   count():a(10){}//default constructor initialising
  
    void operator ++()
    {
        ++a;
    }
    void operator ++(int)
    {
        a++;
    }
    void display()
    {
        cout<<"value of a is:"<<a<<endl;

    }
};
int main()
{
    count obj;
    ++obj;
    obj.display();
    obj++;
    obj.display();
    return 0;

}
//count(int x){x=a;}\\parmeterised consrtructor and value for a is assign   in the  main function

//copy constructor//first we use default constructor
//count():a(0){}
//then we use parmeterised constructor
//count(int x){a=x;}
//count(const copy &x){a=x.a;}
//int main(){count obj(12);
//count obj_1(obj);}
 