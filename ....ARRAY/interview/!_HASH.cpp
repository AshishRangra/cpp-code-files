#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100
bool hashTable[MAX + 1][2];
void insert(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            hashTable[arr[i]][0] = 1;
        }
        else
        {
            hashTable[abs(arr[i])][1] = 1;
        }
    }
}
bool search(int x)
{
    if (x >= 0)
    {
        if (hashTable[x][0] == 1)
        {
            return true;
        }

        else
        {
            return false;
        }
    }
    else
    {
        x = abs(x);
        if (hashTable[x][1] == 1)
            return true;
        else
            return false;
    }
}
int main()
{
    int arr[] = {-2, -1, 43, 2, 1, 0, -5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = -2;
    insert(arr, n);
    if (search(x) == 1)
        cout << "exist";
    else
    {
        cout << "not exist";
    }
    return 0;
}