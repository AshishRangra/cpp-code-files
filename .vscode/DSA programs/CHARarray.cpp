#include <iostream>

using namespace std;
int main()
{
    // char arr[100]="apple";
    // char a[100];
    // cin>>a;
    // cout<<a[3];
    // int i=0;
    // while(arr[i]!='\0'){
    //     cout<<arr[i];
    //     i++;
    // }
    int n;
    cin >> n;
    cin.ignore();
    char a[n + 1];
    cin >> a;
    // bool check=1;
    // for(int i=0;i<n;i++){
    //     if(a[i]!=a[n-1-i]){
    //         check=0;
    //         break;
    //     }
    //     if(check==true){
    //         cout<<"word is a palindrome";
    //     }
    //     else{
    //         cout<<"word is not a palindrome";
    //     }

    // largest word in a sentence
    cin.getline(a, n);
    cin.ignore();

    int i = 0;
    int currLen = 0, maxLen = 0;
    int st = 0, maxst = 0;
    while (1)
    {
        if (a[i] == ' ' || a[i] == '\0')
        {
            if (currLen > maxLen)
            {
                maxLen = currLen;
                maxst = st;
            }
            currLen = 0;
            st = i + 1;
        }
        else
            currLen++;
        if (a[i] == '\0')
            break;
        i++;
    }

    cout << maxLen;
    for (int i = 0; i < maxLen; i++)
    {
        cout << a[i + maxst];
    }

    return 0;
}