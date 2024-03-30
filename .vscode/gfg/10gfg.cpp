// // C/C++ Program for Search an element in a sorted and pivoted array
// #include<iostream>
// #include<algorithm>
// using namespace std ;
// int main()
// {
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++){
//     cin>>a[i];
// }
// sort(a,a+n);
// for(int i=0;i<n;i++){
//     cout<<a[i]<<"  ";
// }cout<<endl;

// int pivoted_element;
// cin>>pivoted_element;
// sort(a,a+n);

// int mid=(n/2);
// if(pivoted_element==a[mid]){
//      cout<<pivoted_element<<"  ds4is present at " <<mid<<"th index";
    
// }
// else if(pivoted_element>a[mid]){
    
//     for(int i=mid;i<n;i++){
//     cout<<"          i="<<i<<endl;
//     if(pivoted_element==a[i]){
        
//          cout<<pivoted_element<<"is present at " <<i<<"th index";
   
// } 
//     }
// }
//      else if(pivoted_element<a[mid]){
//      for(int i=0;i<mid;i++){
//    cout<<"                                i="<<i<<endl;
//     if(a[i]==pivoted_element){
//     cout<<pivoted_element<<"is present at " <<i<<"th index";
   
// }
//      }
// }

    
// return 0;
// }
// =========================================================================================================================================================================
// C/C++ Program for Search an element in a sorted and rotated array
// C/C++ Program for Program for array rotation
#include<iostream>
#include<algorithm>
using namespace std ;
int main()
{
   
// int arr[]={1,2,3,4,5,6};
// int temp[6];
// for(int i=0;i<5;i++){
//     swap(a[i+1],a[i]);
// //   swap(a[1],a[0]);
// //   swap(a[2],a[1]);
// //   swap(a[3],a[2]);
// //   swap(a[4],a[3]);
// //   swap(a[5],a[4]);
//  cout<<(a[i+1],a[i]);
// }

   
// //   cout<<(a[1],a[0]);
// //   cout<<(a[2],a[1]);
// //   cout<<(a[3],a[2]);
// //   cout<<(a[4],a[3]);
// //   cout<<(a[5],a[4]);
int n;
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
    }  
        int x;
        cin>>x;
        for(int i=0;i<n;i++){
            if(a[i]==x){
                cout<<"Element is persent at index"<<i;
                              }
                }
        
return 0;
}