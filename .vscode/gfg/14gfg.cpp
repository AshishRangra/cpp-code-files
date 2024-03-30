// C/C++ Program for Program for array rotation
#include<iostream>
#include<algorithm>
using namespace std ;
int main()
{int n;
cin>>n;
int a[n];//1,3,4,5,7,9
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
for(int i=0;i<n;i++){
    cout<<a[i]<<"   ";
}

int temp[n];
cout<<endl;
int d;
int k=0;
cin>>d;
for (int i = d; i < n; i++) {
        temp[k] = a[i];
        k++;
    }
for (int i = 0; i < d; i++) {
        temp[k] = a[i];
        k++;
    }
    
 for (int i = 0; i < n; i++) {
        a[i] = temp[i];
      
    }
  for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }  return 0;
}