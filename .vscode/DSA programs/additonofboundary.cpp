#include <iostream>
using namespace std;
int main()
{
    // int m = 5;
    int m;
    cin>>m;
    int a[m][m];
    // int a[5][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    // int a[5][5]={6,9,8,5,9,2,4,1,8,3,9,3,8,7,8,6,8,9,4,1,1,7,6,1,5};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << "    ";
        }
        cout << endl;
    }
      int sum = 0;
    if(m>4){
    cout << "boundary addition" << endl;
  
    int k = 0;
    while (k < m)
    {
        if (k == 0 || k == m - 1)
        {
            // for(int i=4;i<5;i++){

            //  sum=0;
            for (int i = k; i < k + 1; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    sum += a[i][j];

                    // cout << sum << endl;
                }
            }
            k++;
        }
        else if (k == 1 || k == m - 2)
        {
            // cout << "else if";
            // sum = 0;
            for (int i = k; i < k + 1; i++)
            {
            // for (int i = 3; i < 4; i++)
            // {
                for (int j = 0; j < m; j++)
                {
                    if (j == m / 2)
                    {
                        sum += 0;
                    }
                    else
                    {
                        sum += a[i][j];
                    }
                    // cout << sum << endl;
                }
            }
            k++;
            // return 0;
        }
        else if(k==2||m-3)
        {
            // cout<<"else";
            for(int i=k;i<=k;i++){
                // sum=0;
                for(int j=0;j<m;j++){
                    if(j%2==0)
                    sum+=a[i][j];
                
                else{
                    sum+=0;
                }
                // cout<<sum<<endl;
                }
            }
            k++;
        }
    }}
    else{
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                 sum+=a[i][j];
            }
        }
       
    }
    cout << sum;
    return 0;
}