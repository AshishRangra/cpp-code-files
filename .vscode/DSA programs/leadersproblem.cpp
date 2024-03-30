#include <iostream>
#include <vector>
using namespace std;
vector<int> leaders(int ar[], int n)
{
    // Code here
    int i = 0;
    int a[n];
    int k = 0;
b:
    int flag = 0;
    for (int j = i + 1; j < n; j++)
    {

        if (ar[i] > ar[j])
        {
            flag++;
            if (flag + i == n - 1)
            {
                a[k] = ar[i];
                i++;
                k++;
                goto b;
            }
        }
        else
        {
            i++;
            goto b;
        }
    }

    for (int i = 0; i < k; i++)
    {
        cout << a[i] << " ";
    }
    return {ar[n - 1]};
}
int main()
{
    int a[] = {16, 17, 4, 3, 17, 5, 2};
    leaders(a, 7);
}

// class Solution{
//     //Function to find the leaders in the array.
//     public:
//     vector<int> leaders(int a[], int n){
//       int temp=INT_MIN;
//       vector<int>ans;
//       for(int i=n-1;i>=0;i--)
//       {
//           if(a[i]>=temp)
//           {
//               temp=a[i];
//               ans.push_back(temp);
//           }

//       }
//       reverse(ans.begin(),ans.end());
//       return ans;

//     }
// };