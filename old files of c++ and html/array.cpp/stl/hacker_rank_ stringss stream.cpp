#include <sstream>
#include <vector>
#include <iostream>
#include<string>
#include<vector>
using namespace std;

vector<int> display(string str){
    stringstream ss(str);
    char ch;
    vector<int> v1;
    int v;
    while(ss>>v){
        v1.push_back(v);
        ss>>ch;}
        return v1;
    }
    int main(){
        string str;
        cin>>str;
        vector<int> v2=display(str);
        
        for(int i=0;i<v2.size();i++){
            cout<<v2[i]<<endl;
        }
    return 0;
}