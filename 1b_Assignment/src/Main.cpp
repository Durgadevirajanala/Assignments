#include<Bank.h>
#include<iostream>



using namespace std;
int main()
{
	int acc_no;
	char name[100], acc_type[100];
	float Balance;
	cout<<" Enter Details: "<<endl;
	cout<<"***********"<<endl;
	cout<<" Accout No. "<<endl;
	cin>>acc_no;
	cout<<" Name : "<<endl;
	cin>>name;
	cout<<" Account Type : "<<endl;
	cin>>acc_type;
	cout<<" Balance : "<<endl;
	cin>>Balance;

	Bank_Acc b1(acc_no, name, acc_type, Balance);  //object is created
//	Bank b1=new Bank[2];
	b1.deposit(); //
	b1.withdraw(); // calling member functions
	b1.Display();	//
	b1.Search();
	return 0;
}
