#include<1c.h>

void Bank::getdetails()
	{
		name=new char[20];
		cout<<endl<<endl<<"**********Customer Details*********** "<<endl;
		cout<<"          -------- -------            "<<endl;
		cout<<"Enter Name: ";
		cin>>name;
		cout<<"Enter accnumber: ";
		cin>>accnumber;
		cout<<"Enter Acctype: ";
		cin>>acctype;
		cout<<"Enter deposit amount: ";
		cin>>depo;
		cout<<"______________________________________"<<endl<<endl;
	}	

void Bank::withdrawal()
	{
		long amtdrawn;
		cout<<"Enter amount to be withdrawn: ";
		cin>>amtdrawn;
		if(balance<amtdrawn)
			cout<<"\nInsufficient balance! "<<endl<<endl;
		else
			balance=balance-amtdrawn;
	}
	
void Bank::deposit()
	{
		long dep;
		cout<<"Enter amount to be deposited: ";
		cin>>dep;
		balance+=dep;
	}
	
void Bank::newaccount()
	{
		accno++;
		getdetails();
		balance=0;
	}
	
void Bank::viewaccdetails()
	{
		cout<<endl<<endl<<"********* BANK ACCOUNT DETAILS*********"<<endl;
		cout<<"         --- ---- ------- -------         "<<endl;
		cout<<"Account no.: "<<accno<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Acctype: "<<acctype<<endl;
		cout<<"Balance: "<<balance<<endl;
		cout<<"_________________________________________"<<endl;
		   
	}

