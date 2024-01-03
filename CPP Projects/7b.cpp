#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *link;

};
class Stack
{
    public:
    Node *top;
    Stack()
    {
        top=NULL;
    }
    void push(int num)
    {
        Node *temp=new Node;
        temp->data=num;
        if(top==NULL)
        {
            top=temp;
            top->link=NULL;
        }
        else{
            temp->link=top;
            top=temp;
        }
    }
    void pop()
    {
        Node *temp;
        if(top==NULL)
        {
            cout<<"Empty Stack"<<endl;
        }
        else
        {
            temp=top;
            top=top->link;
            delete temp;
        }

    }
    void display()
    {
        Node *temp;
        temp=top;
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->link;
        }
    }

};
int main()
{
    Stack one;
    one.push(2);
    one.push(3);
    one.push(4);
    cout<<"---------"<<endl;
    one.display();
    one.pop();
    cout<<"---------"<<endl;
    one.display();
    one.pop();
    cout<<"---------"<<endl;
    one.display();
    return 0;
}