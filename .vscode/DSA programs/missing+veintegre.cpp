// #include<iostream>
// #include<algorithm>
// using namespace std;
// // namespace std;

// int missingNumber(int arr[], int n)
//     {
//     //     long long s,c;
//     //   sort(arr,arr+n);
//     //   for(long long i=0;i<n;i++){
//     //       if(arr[i]<0){
//     //           exit;
//     //       }
//     //       else if(arr[i]>=0 && arr[i]==0){
//     //           s=arr[i];
//     //           c=i;
//     //           break;
//     //       }
//     //       else{
//     //           s=1;
//     //           c=i;
//     //           break;
//     //       }
//     //   }
//     //     for(long long  j=c;j<n;j++){
//     //         if(s==arr[j]){
//     //             s++;
//     //         }
//     //         else{
//     //             return s;
//     //         }

//     //         if(j==n-1 &&s!=arr[j])
//     //         return s;

//     //     }
//     int ptr = 0;

//     // Check if 1 is present in array or not
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == 1) {
//             ptr = 1;
//             break;
//         }
//     }

//     // If 1 is not present
//     if (ptr == 0)
//         return 1;

//     // Changing values to 1
//     for (int i = 0; i < n; i++)
//         if (arr[i] <= 0 || arr[i] > n)
//             arr[i] = 1;

//     // Updating indices according to values
//     for (int i = 0; i < n; i++)
//         arr[(arr[i] - 1) % n] += n;

//     // Finding which index has value less than n
//     for (int i = 0; i < n; i++)
//         if (arr[i] <= n)
//             return i + 1;

//     // If array has values from 1 to n
//     return n + 1;

//             }

//             int main(){
//                  int a[]={-47 ,1, 4, 49 ,-18 ,10, 26 ,18 ,-11, -38 ,-24, 36 ,44, -11 ,45 ,20 ,-16, 28 ,17, -49 ,30 ,36, -9, 15, 39 ,-6 ,-31 ,-10 ,-21 ,-19 ,-33, 47, 21, 31, 25, -41, -23, 17 ,6, 47 ,3 ,36 ,15 ,-44, 33, -31, -26, -22 ,21, -18, -21, -47 ,-31, 20, 18, -42, -35, -10, -1, 46, -27 ,-32, -5 ,-4 ,1 ,-29, 5, 29, 38 ,14 ,-22, -9, 0, 43, -50 ,-16 ,14 ,-26};
//         missingNumber(a,85);
//     }
#include <iostream>
#include <algorithm>
using namespace std;
int missingNumber(int a[], int n)
{
  // sort(a,a+n);
  int b = a[0];
  int c = 1;
  for (int i = 1; i < n; i++)
  {
    b ^= a[i];
  }
  for (int i = 2; i <= n + 1; i++)
  {
    c ^= i;
  }

  return (b ^ c);
}
int main()
{
  int a[] = {1, 2, 4, 6, 7};

  cout << missingNumber(a, 5);
  return 0;
}