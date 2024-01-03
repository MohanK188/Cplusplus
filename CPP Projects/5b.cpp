#include<iostream>
#define PI 3.14
using namespace std;
class Shape
{
protected:
    float area;
public:
    virtual void getArea()=0;
    virtual void dispArea()=0;
    virtual void disp()
    {
        cout<<area<<"sq.units";
    }
};
class Square:public Shape
{
    public:
    float len;
    void getArea()
    {
        cout<<"Enter Side of the square=";
        cin>>len;
        area=len*len;
    }
    void dispArea()
    {
       cout<<"Area of Square: ";
       Shape::disp();
    }

};
class Rectangle:public Shape
{
    float len,bre;
    void getArea()
    {
        cout<<"Enter Length of Rectangle:";
        cin>>len;
        cout<<"Enter breadth of rectangle:";
        cin>>bre;
        area=len*bre;
    }
    void dispArea()
    {
        cout<<"Area of Rectangle: ";
        Shape::disp();
    }
};
class Triangle:public Shape
{
    float bre,hgt;
    void getArea()
    {
        cout<<"Enter breadth of Triangle: ";
        cin>>bre;
        cout<<"Enter Height of Triangle: ";
        cin>>hgt;
        area=(bre*hgt)/2;
    }
    void dispArea()
    {
        cout<<"Area of Triangle: ";
        Shape::disp();
    }
};
class Circle:public Shape
{
    float rad;
    void getArea()
    {
        cout<<"Enter Radius of Circle: ";
        cin>>rad;
        area=PI*rad*rad;
    }
    void dispArea()
    {
        cout<<"Area of Circle: ";
        Shape::disp();
    }
};
int main()
{
    int opt;
    Shape *s;
    cout<<"Choose a Shape"<<endl;
    cout<<"1.Square\t"<<"2.Rectangle"<<endl;
    cout<<"3.Triangle\t"<<"4.Circle"<<endl;
    cin>>opt;
    switch(opt)
    {
        case 1:
            {
                s=new Square;
                break;

            }

        case 2:
            {
                s=new Rectangle;
                break;
            }

        case 3:
            {
                s=new Triangle;
                break;
            }

        case 4:
            {
                s=new Circle;
                break;
            }

        default:
            cout<<"Enter a Valid Option"<<endl;
            exit(1);

    }
    s->getArea();
    s->dispArea();

    return 0;
}
