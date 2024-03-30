#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// int Count(int n)
// {
//     return int(log10(n) + 1);
// }
// int sum(int num)
// {

//     int a1 = Count(num) - 1;
//     int b = pow(10, a1);
//     int res1 = num / b;

//     int result = 0;
//     while (a1 >= 0)
//     {

//         result += res1;
//         res1 = num % b;

//         a1--;

//         b = pow(10, a1);
//         if (a1 >= 1)
//         {
//             res1 /= b;
//         }
//         else
//         {
//             result += res1;

//             return result;
//         }
//     }
// }
void getSum(int n)
{
    // int sum = 0;
    // while (n != 0)
    // {
    //     sum = sum + n % 10;
    //     n = n / 10;
    //     cout<<sum;
    // }
    // return sum;
    // int a;
    int b = 0;
    vector<int> bb;
    while (n > 0)
    {
        // /* code */
        n = n % 10;
        // // bb.push_back(a);

        b = b * 10 + n;
        // cout << b << endl;
        n = n / 10;
    }
    cout << b;
    // for (auto i : bb)
    // {
    //     cout << i;
    // }
}
int main()
{
    int a;
    cin >> a;

    // cout << getSum(a);
   getSum(a);
    return 0;
}