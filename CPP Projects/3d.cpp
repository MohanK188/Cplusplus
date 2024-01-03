#include<iostream>
#include<string>
using namespace std;
class SVCEian
{
    public:
        string name,email,dept;
        virtual void read()
        {
            cout<<"Enter Your Name: ";
            cin>>name;
            cout<<"Enter Your Email: ";
            cin>>email;
            cout<<"Enter Your dept: ";
            cin>>dept;
        }
        virtual void disp()
        {
            cout<<"Name: "<<name<<"\t"<<"Dept: "<<dept<<endl;
            cout<<"Email: "<<email<<endl;
        }
};

class Student:public SVCEian
{
    public:
        int rollno;
        string degree;
        void read()
        {
            cout<<"Rollno: ";
            cin>>rollno;
            cout<<"Degree: ";
            cin>>degree;
        }
        void disp()
        {
            cout<<"Rollno: "<<rollno<<endl;
            cout<<"Degree: "<<degree<<endl;
        }

};
class Faculty:public SVCEian
{
    public:
        int empid;
        string grade;
        void read()
        {
            cout<<"Enter Employee id: ";
            cin>>empid;
            cout<<"Enter Your Grade: ";
            cin>>grade;
        }
        void disp()
        {
            cout<<"Employee id: "<<empid<<endl;
            cout<<"Grade: "<<grade<<endl;
        }

};
class Researcher:public Student,public Faculty
{
    public:
        int resid;
        string type;
        void readWrite()
        {
            cout<<"Enter Research id: ";
            cin>>resid;
            cout<<"Enter Type(FT or PT): ";
            cin>>type;
            if(type=="FT")
            {
                cout<<"Student Details:"<<endl;
                Student::read();
                cout<<"------------------"<<endl;
                Student::disp();
            }
            else if(type=="PT")
            {
                cout<<"Faculty Details:"<<endl;
                Faculty::read();
                cout<<"------------------"<<endl;
                Faculty::disp();
            }
        }


};
int main()
{
    cout<<"******Reg.no=210601037******"<<endl;
    SVCEian st;
    st.read();
    Researcher r;
    cout<<"---------------------"<<endl;
    r.readWrite();
    st.disp();
    return 0;
}
