#include<iostream>
using namespace std;
int main()
{
int x=5,y=10,roll_no,marks;
char name[10];
  
  try{ 
     //throw 10;
     cout<<"Enter your name";
     cin>>name;
     throw name;
     cout<<"Enter roll_no.:";
     cin>>roll_no;

  }
  catch(int  )
  {
      cout<<"Exception Handled successfully";
    
  }
  catch(double)
  {
      cout<<"floating exception caught successfully:";
     
  }
  catch(char*)
  {
      cout<<"CHar exception handled succesfully:";
 cout<<endl<<"Name:   "<<name<<"Roll no. is:   "<<roll_no<<endl;
      cout<<"   Marks:"<<marks;
  }

return 0;

}
