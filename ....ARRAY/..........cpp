#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    int &b = a;
    b = 20;
    cout << b << "  " << a;

    return 0;
}