#include <iostream>
using namespace std;
void merge(int a[], int s, int mid, int e)
{
    int lengthoffirstArray = mid - s + 1;
    int lengthofsecondarray = e - mid;
    int a1[lengthoffirstArray];
    int a2[lengthofsecondarray];
    int k = s;
    for (int i = 0; i < lengthoffirstArray; i++)
    {
        a1[i] = a[k++];
    }
    k = mid + 1;
    for (int i = 0; i < lengthofsecondarray; i++)
    {
        a2[i] = a[k++];
    }
    // merge
    int i1 = 0, i2 = 0; // index of two sorted array
    k = s;
    while (i1 < lengthoffirstArray && i2 < lengthofsecondarray)
    {
        /* code */
        if (a1[i1] < a2[i2])
        {
            a[k++] = a1[i1++];
        }
        else
        {
            a[k++] = a2[i2++];
        }
    }
    while (i1 < lengthoffirstArray)
    {
        a[k++] = a1[i1++];
    }
    while (i2 < lengthofsecondarray)
    {
        a[k++] = a2[i2++];
    }
}
void mergeSort(int a[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    mergeSort(a, s, mid);
    mergeSort(a, mid + 1, e);
    merge(a, s, mid, e);
}
int main()
{
    int arr[] = {32, 544, 76, 9, 8, 33, 2, 0, 76, 45, 44};
    mergeSort(arr, 0, 11);
    for(int i=0;i<11;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}