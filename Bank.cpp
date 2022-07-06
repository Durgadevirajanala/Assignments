#include<iostream>
#include<cstring>
using namespace std;
class Bank
{     private:
	char customername[100];
	int accountnumber;
	string accounttype;
	float accountbalance;
	
	public:
	Bank(){}
	void account()
	{
	string customer_name="defaultName";
	cout<<"Customer Name:"<<customer_name<<endl;
	long int Account_Number=123456789012;
        cout<<"Account_Number:"<<Account_Number<<endl;
	string Type_of_Account="Savings";
	cout<<"Type_of_Account:"<<Type_of_Account<<endl;
	int Account_Balance=0;
	cout<<"Account_Balance:"<<Account_Balance<<endl;
	}
	
	Bank(char *cn,int an,string at,float ab)
	{
		strcpy(customername,cn);
		accountnumber=an;
		accounttype=at;
		accountbalance=ab;
	}
	~Bank(){}
	void deposit()
	{
		int depositamount;
		cout<<"\nDeposit Amount:";
		cin>>depositamount;
	}
	void withdraw()
	{
		int withdrawamount;
		cout<<"\nEnter Withdraw Amount:";
		cin>>withdrawamount;
		if(withdrawamount>accountbalance)
		{
			cerr<<"Insufficient Balance:"<<endl;
			accountbalance-=withdrawamount;
		}
	}
	void display()
	{
	         cout<<"\n-------------------";	
		cout<<"\nCustomer Name:"<<customername;
		cout<<"\nAccount Number:"<<accountnumber;
		cout<<"\nAccount Type:"<<accounttype;
		cout<<"\nAccount Balance:"<<accountbalance<<endl;
	}
};
int main()
{
	char customername [100];
	int accountnumber;
	string accounttype;
	float accountbalance;
        cout<<"\nEnter details:";
        cout<<"\n-------------------";
	cout<<"\nCustomer Name:";
	cin>>customername;
	cout<<"\nAccount Number:";
	cin>>accountnumber;
	cout<<"\nAccount Type:";
	cin>>accounttype;
	cout<<"\nAccount Balance:";
	cin>>accountbalance;
        
	Bank obj;
	
	Bank b1(customername,accountnumber,accounttype,accountbalance);
	b1.display();
	b1.deposit();
	b1.withdraw();
        obj.account();
	Bank *ptr;
        ptr=new Bank;
        delete ptr;
      // ptr->display();
      // ptr->deposit();
       // ptr->withdraw();	

	return 0;
}

