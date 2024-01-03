#include<iostream>
using namespace std;
class Box
{
	public:
		void getVolume()
		{
			cout<<"Volume is :"<<length*breadth*height;
		}
		void getLength(double len)
		{
			this->length = len;
		}
		void getBreadth(double brd)
		{
			this->breadth = brd;
		}
		void getHeight(double hgt)
		{
			this->height = hgt;
		}
		Box operator+(const Box& b)
		{
			Box box;
			box.length = this->length + b.length;
			box.breadth = this->breadth + b.breadth;
			box.height = this->height + b.height;
			return box;
		}
	private:
		double length;
		double breadth;
		double height;
		
};
int main()
{
	Box box1;
	Box box2;
	Box box3;
	
	box1.getLength(23.5);
	box1.getBreadth(45.6);
	box1.getHeight(56.7);
	box1.getVolume();
	cout<<endl;
	
	box2.getLength(22.2);
	box2.getBreadth(34.5);
	box2.getHeight(76.2);
	box2.getVolume();
	cout<<endl;
	
	box3 = box1+box2;
	box3.getVolume();
}
