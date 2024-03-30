#include<iostream>
#include<string>
using namespace std;
class employee
{protected:
  string name;
  int age;
  public:
  employee(string s,int a)
  {
      name=s;
      age=a;
      
  }
 virtual void display()
  {
      
  }
  
};
class wage_employee:public employee
{
    int hours_month;
    public:
    wage_employee(string s,int a,int h):employee(s,a)
    {
        hours_month=h;
    }
    void display()
    {
        cout<<"Name of employee:"<<name<<endl;
        cout<<"Age of employee :"<<age <<endl;
        cout<<"Salary of employee :"<<(hours_month*50)<<endl;
    }
};
class regular_employee:public employee
{
    int monthly_salary;
    public:
     regular_employee(string s,int a,int m):employee(s,a)
    {
        monthly_salary=m;
    }
    void display()
    {
        
        cout<<"Name of employee:"<<name<<endl;
        cout<<"Age of employee :"<<age <<endl;
        cout<<"Monthly salary of employee:"<<monthly_salary<<endl;
    }
};
class outsource_employee:public employee
{
    int work_days;
    public:
    outsource_employee(string s,int a,int w):employee(s,a)
    {
        work_days=w;
    }
    void display()
    {
        cout<<"Name of employee:"<<name<<endl;
        cout<<"Age of employee :"<<age <<endl;
        cout<<"Outsource of employee"<<(work_days*50)<<endl;
        
    }
};

int main()
{
   wage_employee obj_1("ankit",30,300);
   regular_employee obj_2("ashish",29,5000);
   outsource_employee obj_3("rohit",31,600);
   employee *ptr[3];
   ptr[0]=&obj_1;
   ptr[1]=&obj_2;
   ptr[2]=&obj_3;
   ptr[0]->display();
   ptr[1]->display();
   ptr[2]->display();
   return 0;
}