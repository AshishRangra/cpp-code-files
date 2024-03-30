

#include<iostream>
#include<iomanip>
#include<fstream>

using namespace std;
class Student
{
    int roll_no;
    char name[50];
    int eng_marks,math_marks,cs_marks,phy_marks,chem_marks;
    double average;
    char grade;

public:
void get_value();
void show_value() ;
void calculate() ;
int return_roll_no()  const;
};
void Student::calculate(){
    average=(eng_marks+math_marks+cs_marks+phy_marks+chem_marks)/5;
    if(average>=90)
    {
        grade='E';
    }
    else if(average>=80){
        grade='A';
    }
    else if(average>=70){
        grade='B';
    }
    else if(average>=65)
    {
        
        grade='C';
    }
    else if(average>=57)
    {
        grade='D';
    }
    else{
        grade='F';

    }
}
void Student::get_value(){
    cout<<"Enter roll no. of student:    ";
    cin>>roll_no;
    cout<<"Enter name of student:      ";
    cin.ignore();
    cin.getline(name,50);
    cout<<"All marks should be out of 100"<<endl;
    cout<<"Enter English marks of student:";
    cin>>eng_marks;
    cout<<"Enter math marks of student: ";
    cin>>math_marks;
    cout<<"Enter computer science marks of student: ";
    cin>>cs_marks;
    cout<<"Enter Physics marks of student: ";
    cin>>phy_marks;
    cout<<"Enter Chemistry marks of student: ";
    cin>>chem_marks;
    calculate();
}
void Student::show_value()
{
cout<<"Roll_no of student is:    "<<roll_no<<endl;
cout<<"Name  of student is:    "<<name<<endl;
cout<<"Marks in English of student is:    "<<eng_marks<<endl;
cout<<"Marks in English of student is:    "<<eng_marks<<endl;
cout<<"Marks in math of student is:    "<<math_marks<<endl;
cout<<"Marks in computer science of student is:    "<<cs_marks<<endl;
cout<<"Marks in physics of student is:    "<<phy_marks<<endl;
cout<<"Marks in chemistry of student is:    "<<chem_marks<<endl;
cout<<"Average of student is :      "<<average<<endl;
cout<<"Grade is:"<<grade<<endl;
}
int Student::return_roll_no() const
{
    return roll_no;
}


void create_student();
void search_student(int);
void display_all();
void delete_student(int);
void change_student(int);
int main()
{
    system("cls");
    int choice;
    int num;
cout<<"\t\tMENU\t\t"<<endl;
cout<<"\t1.CREATE STUDENT RECORD:"<<endl;
cout<<"\t2.SEARCH STUDENT RECORD:"<<endl;
cout<<"\t3.DISPLAY ALL STUDENT RECORD:"<<endl;
cout<<"\t4.DELETE STUDENT RECORD:"<<endl;
cout<<"\t5.MODIFY STUDENT RECORD:"<<endl;
cout<<"\t6.EXIT"<<endl;
cout<<"\tWHAT IS YOUR CHOICE(1/2/3/4/5/6)"<<endl;
cin>>choice;
switch(choice)
{
    case 1:
    create_student();
    break;
    case 2:
    cout<<"Enter roll no. here:";
    cin>>num;
    search_student(num);
    break;
    case 3:
    display_all();
    break;
    case 4:
    cout<<"Enter roll no. here:";
    cin>>num;
    delete_student(num);
    break;
    case 5:
    cout<<"Enter roll no. here:";
    cin>>num;
    change_student(num);
    case 6:
    cout<<"THANK YOU";
   exit(0);
    break;
    default:
    
    exit(0);
    system("cls");
}

return 0;
}
void create_student(){
    Student s;
    ofstream out;
    out.open("project1.txt",ios::app|ios::binary);
    s.get_value();
    out.write((char*)&s,sizeof(s));
    
    out.close();
    cout<<"\nStudent record has been created";
    cin.ignore();
    cin.get();
    

}

void display_all(){
    ifstream in;
    Student s;
      in.open("project1.txt",ios::binary);
        if(!in)
        {
            cout<<"File could not be opened,'\n'Press any key to exit ";
            cin.ignore();
            cin.get();
            return ;

        }
         cout<<"\t\tDISPLAY ALL RECORDS\t\t";
       while(in.read((char*)&s,sizeof(s)))
    {
    s.show_value();
    cout<<"=================================================";
    }
    in.close();
    cin.ignore();
    cin.get();
   
}


void delete_student(int n){
    ifstream in;
    Student s;
    in.open("project1.txt",ios::binary);
if(!in)
        {
            cout<<"File could not be opened,'\n'Press any key to exit ";
            cin.ignore();
            cin.get();
         return;
        }
        ofstream out;
        out.open("Temp.txt",ios::out);
        
        in.seekg(0,ios::beg);
        while(in.read((char*)&s,sizeof(s)))
        {
            if(s.return_roll_no()!= n){
                out.write((char*)&s,sizeof(s));

            }
        }
        out.close();
        in.close();
        remove("project1.txt");
        rename("Temp.txt","project1.txt");
        cout<<"\t\tRECORDS DELETED\t\t";
        cin.ignore();
        cin.get();

}
void change_student(int n){
    bool found=false;
    ifstream in;
    Student s;
    in.open("project1.txt",ios::binary);
if(!in)
        {
            cout<<"File could not be opened,'\n'Press any key to exit ";
            cin.ignore();
            cin.get();
           return;
        }

}
void search_student(int n)
{
 ifstream in;
    Student s;
    in.open("project1.txt",ios::binary);
if(!in)
        {
            cout<<"File could not be opened,'\n'Press any key to exit ";
            cin.ignore();
            cin.get();
           return;
        }
        bool flag=false;
        while(in.read((char*)&s,sizeof(s)))
        {
            if(s.return_roll_no()!= n){
                in.read((char*)&s,sizeof(s));
                flag=true;

            }
        }
        in.close();
        if(flag==false)
        {
            cout<<"record does not exist";
        }
       cin.ignore();
       cin.get();
}
