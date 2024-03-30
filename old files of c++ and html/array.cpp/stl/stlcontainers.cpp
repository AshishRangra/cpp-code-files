#include<iostream>
#include<vector>

using namespace std ;
template<class T>
void display(vector<T> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"  ";
        // cout<<v.at(i)<<"  ";
    }
    cout<<endl;
}
int main()
{
int a;
vector<int>v1;
vector<int>v4(10,5);
// for(int i=0;i<5;i++){
//     cout<<"Enter element in vector  ";
//     cin>>a;
//     v1.push_back(a);
// }
// for(int i=0;i<5;i++){
// v1.pop_back();
// }
// display(v1);
// vector<int> :: iterator iter=v1.begin();
// v1.insert(iter,22, 33);
v4.push_back(1);
display(v4);
cout<<v4.size();

return 0;
}