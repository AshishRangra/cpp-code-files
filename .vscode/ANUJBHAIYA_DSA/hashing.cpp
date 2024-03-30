#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(3);
    s.insert(5);
    if(s.find(5)==s.end()){
cout<<"Not found";

    }
    for(auto it=s.begin();it!=s.end();it++){
                cout<<*it<<endl;
    }
    return 0;
}
