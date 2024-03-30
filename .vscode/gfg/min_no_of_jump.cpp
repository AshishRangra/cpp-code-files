/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int minJumps(int a[], int n)
{
    // Your code here
    if (a[0] == 0)
    {
        return -1;
    }
    if (n == 1)
        return 0;
    // int count=0;
    //   for(int i=0;i<n;i++){

    //       if(a[i]>0 ){
    //           i+=a[i];
    //           if(i<n-1){

    //               count++;
    //           }
    //           else{
    //                  i=n-1;
    //               count++;
    //               return count;

    //     if(a[i]>0){
    //         int j=a[i];
    //         if(j>1){
    //         //     for(int s=i+1;s<j;s++){
    //         //   if(a[s]>a[s+1])
    //         //     j=a[s];

    //         //     else{
    //         //         j=a[s+1];
    //         //     }

    //         //     }

    //             j=max(j,i+a[i]);
    //             i+=j-1;
    //             count++;
    //         }
    //         else if(j<=1){
    //             i+=a[i];
    //             count++;
    //         }
    //         if((i=i+a[i])>=n-1){
    //         count++;
    //         return count;

    //     }

    // }
    int jump = 0;
    int des = 0;
    int pos = 0;
    for (int i = 0; i < n - 1; i++)
    {
        des = max(des, a[i] + i);
        if (i >= des)
        {
            return -1;
        }
        if (pos == i)
        {
            pos = des;
            jump++;
        }
    }

    return jump;
}
int main()
{
    int a[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    cout << minJumps(a, 11);
    return 0;
}
