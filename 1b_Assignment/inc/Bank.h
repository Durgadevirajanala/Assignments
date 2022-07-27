#pragma once
#include<iostream>
#include<string.h>
#include<cstring>

using namespace std;

class Bank_Acc
{
	private:
	        int acno;
		char AccountHolderName[100], Account_Type[100];
		float bal;
	public:
		Bank_Acc(){}
		Bank_Acc(int acc_no, char *name, char *acc_type, float Balance)  //Parameterized Constructor
		{
			acno=acc_no;
			strcpy(AccountHolderName, name);
			strcpy(Account_Type, acc_type);
			bal=Balance;
		
		}
		~ Bank_Acc() {
			cout<<"Destructer Invoked ;"<<endl;
		}
		void deposit();
		void withdraw();
		void Display();
		void Update();
		void Search();
};
