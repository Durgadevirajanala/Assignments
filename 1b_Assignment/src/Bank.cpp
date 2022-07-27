#include<Bank.h>
using namespace std;
void Bank_Acc:: Create_Account()
	    {

		    cout << "Enter Account Number: ";
		    cin >> acno;
		    cout << "Enter Name: ";
		    cin >> AccountHolderName;
		    cout << "Enter the Account Type: ";
		    cin >> Account_Type;
		    cout << "Enter  Balance: ";
		    cin >> bal;
	    }


void Bank_Acc::deposit()   //depositing an amount
{
	int DepositAmmount1;
	cout<<" Enter Deposit Amount = "<<endl;
	cin>>DepositAmmount1;
	bal+=DepositAmmount1;
}
void Bank_Acc::withdraw()  //withdrawing an amount
{
	        int WithdrawAmmount1;

		cout<<" Enter Withdraw Amount = "<<endl;
		cin>>WithdrawAmmount1;
		if(WithdrawAmmount1>bal)
			cout<<" Cannot Withdraw Amount"<<endl;
		bal-=WithdrawAmmount1;
}
void Bank_Acc::display()  //Showing the details
{
	cout<<" *************"<<endl;
	cout<<" Accout No. : "<<acno;
	cout<<" Name : "<<AccountHolderName;
	cout<<" Account Type : "<<Account_Type;
	cout<<" Balance : "<<bal;  

}
void Bank_Acc:: Update()

{   

	char *n[100];
	int b;
	char *actp
	cout << "Account Number: " << acno << endl;
	cin >> n[100];
	cout << "Name: " << n[100] << endl;
	cin >> actp;
	cout <<"Account Type :" <<actp << endl;
	cin >> b;
	cout << "Balance: " << b << endl;
}

int Bank_Acc::Search(int a)
{
	if (acno == a) {
		Update();
		return (1);
	}
	return (0);
}
