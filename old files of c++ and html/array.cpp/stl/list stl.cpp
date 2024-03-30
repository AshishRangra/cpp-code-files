#include<iostream>
#include<list>
using namespace std;
void display(list<int> &l){
    
    list<int>:: iterator it;
    for(it=l.begin();it!=l.end();it++){
    cout<<*it<<"    ";
}
cout<<endl;
}
int main(){
    list<int>l1;
    list<int>l2(3);
    cout<<"elements in list are:"<<endl;
    l1.push_back(8);
    l1.push_back(88);
    l1.push_back(87);
    l1.push_back(3);
    l1.push_back(4);
    list<int>:: iterator it;
    // deleting elements 
    // l1.pop_back();
    // l1.pop_front();
    // l1.remove(88);
display(l1);
l1.sort();
cout<<"sorted elements are"<<endl;
display(l1);
cout<<endl;


cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;

it=l2.begin();
*it=10;
it++;
*it=9;
it++;
*it=765;
it++;
display(l2);
// l2.sort();
display(l2);
l1.merge(l2);
cout<<"after merging:";
display(l1);
l1.sort();
display(l1);
l1.reverse();
display(l1);

return 0;   
}