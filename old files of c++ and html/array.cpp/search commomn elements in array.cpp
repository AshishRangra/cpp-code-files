#include<iostream>
using namespace std;
int main()
{
    int a[10],b[10],c[10],d,e,f;
    cout<<"Enter elements of a:"<<endl;
    for(int i=0;i<10;i++)
    cin>>a[i];
    cout<<"Enter element of b:"<<endl;
    for(int i=0;i<10;i++)
    cin>>b[i];
    //finding and storing common elements
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(a[i]=b[i])
            d=0;
            for(int e=0;e<f;e++)
            {
                if(a[i]==c[e]){
                    d++;
                }
                if(d==0)
                {
                    c[e]=a[i];
                    e++;

                }


            }

        }
    }
    
    cout<<"/tCommon elements are:\n"<<endl;
    for(int i=0;i<e;i++)
    cout<<c[i]<<"  ";
    cout<<endl;
    return 0;


}
