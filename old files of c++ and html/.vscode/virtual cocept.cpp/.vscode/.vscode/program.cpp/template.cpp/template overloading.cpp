#include<iostream>
using namespace std;
template<class t>
class ashish
{
public:
t data;
ashish(t a){
    data=a;
}
void display();


};
template<class t>
void ashish<t>::display(){
    cout<<data;
}

template<class t>
t func(t b){
     cout<<"I m template function"<<b<<endl;
}
int func(int b)
{
    cout<<"I m first function:"<<b<<endl;
}
template<class t>
t func1(t b)
{
    cout<<"function 1 is :"<<b<<endl;
}
int main()
{

    ashish <float>h(1.8);
    cout<<"data is:"<<h.data<<endl;
    h.display();
    func(4);
    func1(4);
    return 0;

}
 