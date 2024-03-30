// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int sum = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         sum += arr[i];
//     }
//     cout << sum;
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int res[2][2];
    int arr[2][2] = {1, 2, 3, 4};
    int arr1[2][2] = {1, 2, 3, 4};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                res[i][j] += arr[i][k] * arr[k][j];
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}