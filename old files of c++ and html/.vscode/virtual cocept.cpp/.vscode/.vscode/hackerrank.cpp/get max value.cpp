#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int,int,int,int);

int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    if(a>d && a>b && a>c)
    {
        cout<<a;
    }
    else if(d>a && d>b &&d>c)
    {
        cout<<d;
    }
    else if(b>d && b>a &&b>c)
    {
        cout<<b;
        
    }
    else {
    cout<<c;
    }
    return 0;
}