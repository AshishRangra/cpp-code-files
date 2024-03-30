#include <iostream>
#include <unordered_map>
using namespace std;
class A
{

public:
    int get(int arr[], int n, int k)
    {
        unordered_map<int, int> m;

        int cnt = 0;

        for (int i = 0; i < n; i++)

        {

            if (k - arr[i] > 0)

            {

                cnt += m[k - arr[i]];

                m[arr[i]]++;
            }
        }
        // for(auto x:m){
        //     cout<<x.first<<" "<<endl;
        // }
        return cnt;
    }
};
int main()
{
    A o;
    int a[4] = {1, 2, 4, 1};
    cout << o.get(a, 4, 6);
}