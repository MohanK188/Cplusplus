#include<iostream>
#include<string>
using namespace std;
class Vehicle
{
public:
    virtual void disp()
    {
        cout<<"Vehicle class"<<endl;
    }
};
class Light_vehicle:public Vehicle
{
    void disp()
    {
        cout<<"Light Vehicle"<<endl;
        cout<<"Has Two Wheels"<<endl;
        cout<<"Can Withstand 2 people max"<<endl;
    }
};
class Heavy_vehicle:public Vehicle
{
    void disp()
    {
        cout<<"Heavy Vehicle"<<endl;
        cout<<"Has Four Wheels"<<endl;
        cout<<"Can Withstand 4 people max"<<endl;
    }

};
int main()
{
    Vehicle v;
    Vehicle *ve;
    string type;
    cout<<"Enter type of Vehicle(Light or Heavy): ";
    cin>>type;
    v.disp();
    if(type=="Light")
    {
        ve =new Light_vehicle;
    }
    else if(type=="Heavy")
    {
        ve =new Heavy_vehicle;
    }
    ve->disp();
    return 0;
}
