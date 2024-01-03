#include<iostream>
using namespace std;

int main()
{
	enum Direction {UP,DOWN,RIGHT,LEFT,STAND};

	
	Direction myD = STAND;
	cout<<myD<<endl;
	
	if(myD == UP)
	{
		cout<<"up!"<<endl;
	}
	else if(myD == DOWN)
	{
		cout<<"Down!"<<endl;
	}
	else if(myD == RIGHT)
	{
		cout<<"Right!"<<endl;
	}
	else if(myD == LEFT)
	{
		cout<<"Left!"<<endl;
	}
	else if(myD == STAND)
	{
		cout<<"Stand!"<<endl;
	}
	return 0;
}