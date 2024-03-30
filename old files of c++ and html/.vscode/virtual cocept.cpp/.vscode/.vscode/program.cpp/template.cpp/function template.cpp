#include<iostream>
using namespace std;
/* template<class T>
  T sum(T a,T b,T c,T d)
  {
      return (a+b+c+d);
  }
  
  int main()
  {
      cout<<"\nsum of two number " <<sum<float>(1.0,2.5,3,4)<<endl;
      cout<<"\nsum of two number " <<sum<double>(1.05,2.5,3,4)<<endl;
      cout<<"\nsum of two number " <<sum<int>(1,2,3,4)<<endl;
      return 0;
  }*/
  template< typename T,typename U>
  T sum(T a,U b)
  {
      return(a+b);

  }
  template<class S>
  void swapp(S &x,S &y)
  {
      S temp=x;
      x=y;
      y=temp;
  }

  int main()
  {
      cout<<"sum of two number\t"<<sum<int,float>(2,3.4)<<endl;
      

      int x=21;
      int y=31;
     swapp(x, y);
      cout<<x<<endl<<y;
      return 0;

  }














