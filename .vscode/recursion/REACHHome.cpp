#include<iostream>
using namespace std ;
void reachHome(int src,int dest){
    cout<<"source"<<src<<"destination"<<dest<<endl;
    // base case
    if(src==dest){
    cout<<"phunch gya";
    return ;
    }else{
    // recursion call
    reachHome(src+1,dest);
    }
}
int main()
{
int dest=10;
int src=1;
reachHome(src,dest);
return 0;
}