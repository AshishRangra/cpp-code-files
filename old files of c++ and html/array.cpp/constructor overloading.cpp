#include<iostream>
using namespace std;
class constr
{
    private:
int area;
    public:
   constr() 
    { 
        area=0;
    }
    constr(int a,int b){
        area=a*b;
    }
    void display(){
        cout<<"area="<<area;

    }
    
};
int main()
{
    constr obj_2;
    obj_2.display();
    constr obj_1(20,2);
    obj_1.display();
    return 0;
}