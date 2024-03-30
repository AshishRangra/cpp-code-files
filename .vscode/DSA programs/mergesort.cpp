#include <iostream>
using namespace std;
void merge(int *a, int s, int e)
{
    int mid = s + (e - s) / 2;
    int len = mid - s + 1;
    int len2 = e - mid;
    int *first = new int[len];
    int *second = new int[len2];
    int m = s;
    for (int i = 0; i < len; i++)
    {
        first[i] = a[m++];
    }
    m = mid + 1;
    for (int i = 0; i < e; i++)
    {
        second[i] = a[m++];
    }

    int index = 0;
    int index2 = 0;
    m = s;
    while (index < len && index2 < len2)
    {
        if (first[index] < second[index2])
        {
            a[m++] = first[index++];
        }
        else
        {
            a[m++] = second[index2++];
        }
    }
    while (index < len)
    {
        a[m++] = first[index++];
    }
    while (index2 < len2)
    {
        a[m++] = second[index2++];
    }
}

void merge_sort(int *a, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    merge_sort(a, s, mid);
    merge_sort(a, mid + 1, e);
    merge(a, s, e);
}
int main()
{
    int a[7] = {38, 27, 43, 3, 9, 82, 10};
    int n = 7;
    merge_sort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}