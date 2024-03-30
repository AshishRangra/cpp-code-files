#include <iostream>
using namespace std;
int main()
{
    int ptr;
    int b[5] = {0};
    int a[5] = {1, 1, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        cout << b[i];
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        ptr = a[i];
        b[ptr]++;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << b[i];
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        if (b[i] <= 1)
        {
            exit;
        }
        else
        {
            cout << b[i];
        }
    }
    return 0;
}