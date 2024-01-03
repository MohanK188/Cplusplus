#include<iostream>
#include<string>
using namespace std;
class Reservation
{
	public:
		string from;
		string to;
		string train_no;
		long int pnr;
		virtual void getDetails()
        {

            cout<<"Enter source: ";
            cin>>from;
            cout<<"Enter Destination: ";
            cin>>to;

            cout<<"Enter Train Number: ";
            cin>>train_no;
            cout<<"Enter PNR: ";
            cin>>pnr;
        }
		virtual void print()
		{
            cout<<"-------------------------------------"<<endl;
            cout<<"From: "<<from<<"\t\t"<<"To: "<<to<<endl;
            cout<<"Train no: "<<train_no<<"\t\t"<<"PNR: "<<pnr<<endl;
		}
};
class General:public Reservation
{
	public:
    int Count;
	int fare;
	void getDetails()
	{
	    cout<<"Enter Count:";
	    cin>>Count;
		cout<<"Enter Fare: ";
		cin>>fare;
	}
	void print()
	{
	    cout<<"fare: "<<Count*fare<<endl;
	}
};
class Tatkal:public Reservation
{
	public:
    int Count;
	int fare;
	void getDetails()
	{
	    cout<<"Enter Count:";
	    cin>>Count;
	    cout<<"Enter Fare: ";
		cin>>fare;
	}
	void print()
	{
		cout<<"fare: "<<Count*fare;
	}

};
int main()
{
    cout<<"******Reg.no 210601037******"<<endl;
	Reservation r;
	r.getDetails();
	char a;
	cout<<"Enter Type of Reservation(G or T): ";
	cin>>a;
	Reservation *re;
	if(a=='G')
    {
        re = new General;
        cout<<"General Details:"<<endl;
    }
	else if(a='T')
    {
       re = new Tatkal;
       cout<<"Tatkal Details:"<<endl;
    }
    re->getDetails();
    r.print();
    re->print();
	return 0;
}

