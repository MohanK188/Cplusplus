#include<iostream>
using namespace std;
class Node
{
   public:
   int coeff;
   int pow;
   Node *link;
   Node()
   {
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
   void createPoly(int x,int y);
   void addPoly(LL &poly1,LL &poly2);
   void display();
};
void LL::createPoly(int x,int y)
{
         Node *temp=head;
         if(temp==NULL)
         {
            temp = new Node;
            head = temp;
         }
         else{
            while(temp->link!=NULL)
            temp=temp->link;
            temp->link=new Node;
            temp=temp->link;
         }
         temp->coeff=x;
         temp->pow=y;
         temp->link=NULL;
}
void LL::addPoly(LL &poly1,LL &poly2)
{
   Node *z;
   if(poly1.head==NULL&&poly2.head==NULL)
   return;
   Node *temp1,*temp2;
   temp1=poly1.head;
   temp2=poly2.head;
   while(temp1!=NULL&&temp2!=NULL)
   {
      if(head == NULL)
      {
         head = new Node;
         z=head;
      }
      else{
         z->link = new Node;
         z=z->link;
      }
      if(temp1->pow<temp2->pow)
      {
      z->coeff=temp2->coeff;
      z->pow=temp2->pow;
      temp2=temp2->link;
      }
      else
      {
      if(temp1->pow>temp2->pow)
      {
      z->coeff=temp1->coeff;
      z->pow=temp1->pow;
      temp1=temp1->link;
      }
      else
      {
      if(temp1->pow==temp2->pow)
      {
      z->coeff=temp1->coeff+temp2->coeff;
      z->pow=temp1->pow;
      }
      temp1=temp1->link;
      temp2=temp2->link;
}
}
}
      while(temp1!=NULL)
      {
      if(head==NULL)
      {
      head= new Node;
      z=head;
      }
      else
      {
      z->link=new Node;
      z=z->link;
      }
      z->coeff=temp1->coeff;
      z->pow=temp1->pow;
      temp1=temp1->link;
      }
      while(temp2!=NULL)
      {
      if(head==NULL)
      {
      head=new Node;
      z=head;
      }
      else
      {
      z->link=new Node;
      z=z->link;
      }
      z->coeff=temp2->coeff;
      z->pow=temp2->pow;
      temp2=temp2->link;
      }
      z->link=NULL;
}
void LL::display()
{
   Node *temp=head; 
   int f=0; 
   cout<<endl; 
   while(temp!= NULL) 
   { 
   if(f!=0) 
   { 
   if(temp->coeff>0) 
   cout<<" + "; 
   else 
   cout<<" "; 
   } 
   if(temp->pow!=0) 
   cout<<temp->coeff<<"x^"<<temp->pow; 
   else 
   cout<<temp->coeff; 
   temp=temp->link; 
   f=1; 
   } 
} 
int main()
{
   LL one,two,result;
   one.createPoly(5,4);
   one.createPoly(3,3);
   one.createPoly(7,2);
   cout<<"First Polynomial: ";
   one.display();
   cout<<endl;
   two.createPoly(6,4);
   two.createPoly(8,3);
   two.createPoly(1,1);
   two.createPoly(5,0);
   cout<<"Second Polynomial: ";
   two.display();
   cout<<endl;
   result.addPoly(one,two);
   cout<<"Added Polynomial: ";
   result.display();
  
  

   return 0;
}