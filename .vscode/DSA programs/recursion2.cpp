#include <iostream>
using namespace std;
void sayDigit(int n, string arr[])
{
    if (n == 0)
        return;
    int digit = n % 10;
    n = n / 10;
    cout << arr[n] << " ";
    sayDigit(n, arr);
}
int main()
{
    int n;
    cin >> n;
    string arr[] = {"zero", "one", "two", "three", "four",
                    "five", "six", "seven", "eigth", "nine"};
    cout << endl
         << endl;
    sayDigit(n, arr);
    return 0;
}