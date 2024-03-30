#include <iostream>
using namespace std;
int main()
{ /*
     int a = 10;
     // int *ptr = 0;
     int *ptr = &a;
     cout << ptr << endl;
     cout << *ptr << endl;
     int *q = ptr;
     cout << *q;
     cout<<endl;
     cout<<q<<endl;

     q=q+1;
     cout<<q;
     int arr[10]={1,2,34,5};
     cout<<"Address of first memory block"<<arr<<endl;
     cout<<"Address of first memory block"<< &arr[0]<<endl;
     cout<<"value"<<*arr<<endl;
     cout<<"value "<<*(arr+2)<<endl;
     */
    int temp[10] = {1, 23, 3};
    cout << sizeof(temp) << endl;
    cout << sizeof(&temp) << endl;
    int *pr = &temp[0];
    cout << sizeof(pr) << endl;
    cout << sizeof(*pr);
    cout << endl
         << sizeof(&pr) << endl;

    char ch[10] = {"asddf"};
    cout << ch << endl;
    cout << *ch << endl;
    char *pp = &ch[0];

    cout << pp << endl;
       
    return 0;
}