#include <iostream>
using namespace std;
int factor(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    return n * (n - 1);
}
int main()
{
    cout << factor(3);
    return 0;
}
