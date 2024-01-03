#include<iostream>
using namespace std;
class Number
{
        int n;
        int num[100];
        friend void getNum(Number &s);
};
void getNum(Number &s)
{
        int sum = 0;
        double mean;
        cout<<"Enter the limit: "<<endl;
        cin>>s.n;
        cout<<"Enter the numbers: "<<endl;
        for(int i=1;i<=s.n;i++)
        {
           cin>>s.num[i];
        }
        for(int j=1;j<=s.n;j++)
        {
           sum += s.num[j];
        }
        mean = (sum/(s.n));
        cout<<"Mean of given numbers: "<<mean<<endl;

}
int main()
{
	Number a;
	getNum(a);
}
