#include<iostream>
using namespace std;
class Node
{
        public:
                int data;
                Node *link;
                Node(int data)
                {
                        this->data=data;
                        this->link=NULL;
                }

};
class LL
{
        public:
                Node *head;
                LL()
                {
                        head=NULL;
                }
                void insertBeg();
                void insertEnd();
                void insertPos();
                void deleteBeg();
                void deleteEnd();
                void deletePos();
                void display();

};
void LL::insertBeg()
{
        int a;
        cout<<"Enter data: ";
        cin>>a;

        Node *n=new Node(a);
        if(head==NULL)
        {
                head = n;
        }
        else
        {
                n->link=head;
                head=n;
        }
}
void LL::insertEnd()
{
        int a;
        cout<<"Enter data: ";
        cin>>a;
        Node *n=new Node(a);
        if(head==NULL)
        {
                head = n;
        }
        else
        {
                Node *temp;
	                temp=head;
                while(temp->link !=NULL)
                {
                        temp=temp->link;
                }
                temp->link=n;
        }
}
void LL::insertPos()
{
        int pos;
        cout<<"Enter Position: ";
        cin>>pos;
        int a;
        cout<<"Enter Data: ";
        cin>>a;
        Node *n=new Node(a);
        if(head == NULL)
        {
                head = n;
        }
        else
        {
                Node *temp;
                temp=head;
                for(int i=0;i<pos-2;i++)
                {
                        temp=temp->link;
              }
                n->link=temp->link;
                temp->link=n;
        }
}
void LL::deleteBeg()
{
        if(head==NULL)
        {
                cout<<"Empty"<<endl;
        }
        else
        {
                head = head->link;
        }
}
void LL::deleteEnd()
{
        if(head == NULL)
        {
                cout<<"Empty"<<endl;
        }
        else
        {
                Node *temp;
                temp=head;
                while(temp->link->link != NULL)
                {
                        temp=temp->link;

                }
                temp->link=NULL;
        }
}
void LL::deletePos()
{
        int pos;
        cout<<"Enter Position to Delete: ";
        cin>>pos;
        if(head==NULL)
        {
                cout<<"Empty"<<endl;
        }
        else
        {
                Node *temp;
                temp=head;
                for(int i=1;i<pos-1;i++)
                {
                        temp=temp->link;
                }
                temp->link=temp->link->link;
        }
}

void LL::display()
{
        if(head==NULL)
        {
                cout<<"Empty"<<endl;
        }
        else
        {
                Node *temp;
                temp = head;
                while(temp->link != NULL)
                {
                        cout<<temp->data<<"\n";
                        temp=temp->link;
                }
                cout<<temp->data<<endl;
        }
}
 
int main()
{
    	LL one;
    	one.insertBeg();
    	one.display();
   	one.insertBeg();
  	one.display();
	one.insertEnd();
	one.display();
	one.insertPos();
	one.display();
	cout<<"----------"<<endl;
	one.deleteBeg();
        one.display();
        cout<<"----------"<<endl;
	one.deleteEnd();
        one.display();
        cout<<"----------"<<endl;
	one.deletePos();
	one.display();
	return 0;
}
