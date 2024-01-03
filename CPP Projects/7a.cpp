#include<iostream>
using namespace std;
class Stack
{
    public:
    int arr[10];
    int top;
    Stack()
    {
        top=-1;
    }
    void push()
    {
        if(top==10)
        {
            cout<<"Can't Push the Stack is Full";
        }
        else
        {
            int a;
            cout<<"Enter an Element: ";
            cin>>a;
            ++top;
            arr[top]=a;
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"Can't pop the Stack is Empty";
        }
        else
        {
            top--;
        }
    }
    void display()
    {
        if(top==-1)
        {
            cout<<"Empty Stack";
        }
        else
        {
            for(int i=top;i>=0;i--)
            {
                cout<<arr[i]<<endl;
            }
        }
    }
};
int main()
{
    Stack one;
    cout<<"Pushing Elements into Stack"<<endl;
    one.push();
    one.display();
    one.push();
    one.display();
    one.push();
    one.display();
    cout<<"Poping Out elements from Stack"<<endl;
    cout<<"-----------"<<endl;
    one.pop();
    one.display();
    cout<<"-----------"<<endl;
    one.pop();
    one.display();
    one.pop();
    one.display();
    return 0;
}