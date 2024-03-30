#include <iostream>
#include <unordered_map>
using namespace std;
void integerToRoman(int n)
{
    unordered_map<int, char> umap;
    // umap.insert({1, 'I'});
    // umap.insert({5, 'V'});
    // umap.insert({10, 'X'});
    // umap.insert({50, 'L'});
    // umap.insert({100, 'C'});
    // umap.insert({500, 'D'});
    // umap.insert({1000, 'M'});
    string s = "";
    int x;
    while (n >= 0)
    {
        x = n % 10;
       
    }
    cout << "Roman " << s;
}
int main()
{
    int n = 11;
    integerToRoman(n);
    return 0;
}