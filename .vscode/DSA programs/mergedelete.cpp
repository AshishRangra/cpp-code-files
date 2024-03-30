#include <iostream>
using namespace std;
void merge_sort(int *a, int s, int e)
{
    int mid = s + (e - s) / 2;
    int len = mid - s + 1;
    int len2 = e - mid;
    int *a1=new int[len];
    int *a2=new int[len2];
    int m = s;
    for (int i = 0; i < len; i++)
    {
        a1[i] += a[m++];
    }
    for (int i = 0; i < e; i++)
    {
        a2[i] += a[m++];
    }
    m = s;
    int index = 0, index2 = 0;
    while (index < len && index2 < len2)
    {
        /* code */
        if (a1[index] < a2[index2])
        {
            a[m++] = a1[index++];
        }
        else
        {
            a[m++] = a2[index++];
        }
    }
    m=mid+1;
    while (index < len)
    {
        a[m++] = a1[index++];
    }
    while (index2 < len2)
    {
        a[m++] = a2[index2++];
    }
}
void merge(int *a, int s, int e)
{

    int mid = s + (e - s) / 2;
    merge(a, s, mid);
    merge(a, mid + 1, e);
    merge_sort(a, s, e);
}
int main()
{
    int a[] = {1, 23, 4, 5, 6, 4, 3, 9, 00};
    merge(a, 0, 8);
    for (int i = 0; i < 9; i++)
    {
        cout << a[i]<<" ";
    }
    return 0;
}
