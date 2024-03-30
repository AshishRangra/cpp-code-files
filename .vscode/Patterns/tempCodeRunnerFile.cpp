#include <iostream>
using namespace std;
int main()
{
    //     // for(int i=0;i<10;i++){
    //     //     for(int j=0;j<=i;j++){
    //     //         cout<<j<<" " ;
    //     //     }
    //     //     cout<<endl;
    //     // }
    //     // 0
    //     // 0 1
    //     // 0 1 2
    //     // 0 1 2 3
    //     // 0 1 2 3 4
    //     // 0 1 2 3 4 5
    //     // 0 1 2 3 4 5 6
    //     // 0 1 2 3 4 5 6 7
    //     // 0 1 2 3 4 5 6 7 8
    //     // 0 1 2 3 4 5 6 7 8 9

    //     //     for (int i = 0; i < 10; i++)
    //     //     {
    //     //         for (int j = 0; j<i; j++)
    //     //         {
    //     //             cout << i << " ";
    //     //         }
    //     //         cout << endl;
    //     //     }
    //     // 1
    //     // 2 2
    //     // 3 3 3
    //     // 4 4 4 4
    //     // 5 5 5 5 5
    //     // 6 6 6 6 6 6
    //     // 7 7 7 7 7 7 7
    //     // 8 8 8 8 8 8 8 8
    //     // 9 9 9 9 9 9 9 9 9

    //     int count = 0;
    //     int n = 4;
    //     for (int i = 0; i < n; i++)
    //     {

    //         for (int j = 0; j <= i; j++)
    //         {

    //             cout << count++ << " ";
    //         }
    //         cout << endl;
    //     }
    //     return 0;
    //     0
    // 1 2
    // 3 4 5
    // 6 7 8 9

    //     for (int i = 0; i < 5; i++)
    //     {
    //         for (int j = 0; j < i; j++)
    //         {
    //             cout << "*"
    //                  << " ";
    //         }
    //         cout << endl;
    //     }
    // *
    // * *
    // * * *
    // * * * *

    //     for (int i = 0; i < 4; i++)
    //     {
    //         for (int j = 3; j >= 0; j--)
    //         {
    //             if (j > i)
    //             {
    //                 cout << " ";
    //             }
    //             else
    //             {
    //                 cout << "*";
    //             }
    //         }
    //         cout << endl;
    //     }
    //    *
    //   **
    //  ***
    // ****

    //     for(int i=0;i<6;i++){
    //         for(int j=i;j<6;j++){
    //             cout<<"*";
    //         }
    //         cout<<endl;
    //     }
    // *****
    // ****
    // ***
    // **
    // *

    //     for (int i = 0; i < 5; i++)
    //     {
    //         for (int j = 0; j < 5; j++)
    //         {

    //             if (j < i)
    //             {
    //                 cout << " ";
    //             }
    //             else
    //             {
    //                 cout << "*";
    //             }
    //         }
    //         cout << endl;
    //     }
    // *****
    //  ****
    //   ***
    //    **
    //     *
    for (int i = 5; i > 0; i--)
    {
        for (int k = 5 - i; k > 0; k--)
        {
            cout << " ";
        }
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
