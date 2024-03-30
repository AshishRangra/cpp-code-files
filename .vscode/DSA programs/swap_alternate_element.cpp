#include<iostream>
using namespace std ;
void swap(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }
}
void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int even[8]={5,2,9,4,7,8,1,0};
    int odd[5]={11,33,9,76,43};
    swap(even,8);
    display(even,8);
    cout<<endl;
     swap(odd,5);
    display(odd,5);
    return 0;
}