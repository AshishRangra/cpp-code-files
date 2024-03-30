// C++ program to print largest contiguous array sum
#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n)
{

  // Your code here
  int a = INT_MIN;
  int b = 0;
  for (int i = 0; i < n; i++)
  {
    b += arr[i];
    if (a < b)
      a = b;
    if (b < 0)
      b = 0;
  }
  return a;
}

// Driver Code
int main()
{
  int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
  int n = sizeof(a) / sizeof(a[0]);

  // Function Call
  int max_sum = maxSubarraySum(a, n);
  cout << "Maximum contiguous sum is " << max_sum;
  return 0;
}
