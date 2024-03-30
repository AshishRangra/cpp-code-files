// linear search of an element in an array
#include<iostream>
using namespace std;
int main(){
    int n;
    int srch_element;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }cout<<endl;
    cin>>srch_element;
    for(int i=0;i<n;i++){
        if(a[i]==srch_element){
            cout<<"element found at index  "<<i<<endl;
            return 0;
        }
    
        else if( i==n-1 && a[i]!=srch_element){
            cout<<"element not found";
        }
    }
    
    return 0;
}