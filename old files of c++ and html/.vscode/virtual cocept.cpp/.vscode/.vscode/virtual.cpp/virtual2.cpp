#include<iostream>
#include<string>
using namespace std;
class CWH
{
    protected:
    float rating;
    string title;
    public:
    CWH(float r,string s)
    {
        rating=r;
        title=s;
    }
   virtual void display()
    {

    }
};
class  CWHvideo:public CWH
{
    float videolength;
    public:
    CWHvideo(float r,string s,float v): CWH(r, s)
    {
        videolength=v;

    }
   void display()
    {
        cout<<"title of video is "<<title<<endl;
        cout<<"Video length is :"<<videolength<<"minutes"<<endl;
        cout<<"Rating of video is :"<<rating<<"out of 5 "<<endl;
    }
};
class CWHtext:public CWH
{
    int words;
    public:
    CWHtext(float r,string s,int w): CWH(r, s)
    {
        words=w;

    }
    void display()
    {
        cout<<"topic of text  is :"<<title<<endl;
        cout<<"word length is :"<<words<<endl;
        cout<<"Rating of text is :"<<rating<<"out of 5 "<<endl;
    }

};

int main()
{
 string title="Virtual function";
 float rating=3.4;
 float videolength=28.5;
 int words=200;
CWHtext obj_1(rating,title,words);
CWHvideo obj_2(rating,title,videolength);
 //obj_1.display();
 CWH* ptr[2];
 ptr[0]=&obj_1;
  ptr[1]=&obj_2;
 ptr[0]->display();
 ptr[1]->display();
return 0;

}

