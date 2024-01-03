#include<iostream>
#include<string>
using namespace std;
class stack
{
public:
int top;
char b[20];
stack()
{
	top = -1;
}
void push(int m)
{
	
	b[++top]=m;
	
	}
int pop()
{
	return b[top--];
}
			

int evaluate(string a)
{
	
	
	for(int i=0;i<a.size();i++)
	{
		if (isdigit(a[i]))
		{
			push(a[i] -'0');
		}
		else 
		{
			int val1 = pop();
			int val2 = pop();
			switch (a[i]) {
            case '+':
                push(val2 + val1);
                break;
            case '-':
                push(val2 - val1);
                break;
            case '*':
                push(val2 * val1);
                break;
            case '/':
                push(val2 / val1);
                break;
		}
	}
	
}
return b[top];
}
};
int main()
{
	stack st;
	string a;
	cout<<"Enter";
	cin>>a;
	int d;
	d=st.evaluate(a);
	cout<<d;
}