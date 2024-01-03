#include<iostream>
#define PI 3.14
using namespace std;
class Circle
{
        public:
                Circle();
                Circle(int radius);
                int radius;
                double area;
                double circum;
                void printDetails();
                void getRad();
                double getArea();
                double getCircum();
};
Circle::Circle()
{
        getRad();
        getArea();
        getCircum();
        printDetails();

}
Circle::Circle(int radius)
{
        this->radius = radius;
        getArea();
        getCircum();
        printDetails();

}
double Circle::getArea()
{
	area = PI*radius*radius;
    return area;
}
double Circle::getCircum()
{
	circum = PI*2*radius;
	return circum;
}
void Circle::getRad()
{
	cout<<"Enter Radius of circle: ";
	cin>>radius;
}
void Circle::printDetails()
{
	cout<<"Radius of Circle: "<<radius<<endl;
	cout<<"Area of circle: "<<area<<endl;
	cout<<"Circumference of circle: "<<circum<<endl;
	cout<<endl;
}
int main()
{
	Circle a,b(12);
	return 0;
	
}