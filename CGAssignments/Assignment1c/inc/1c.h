#pragma once

#include <iostream>
#include <string.h>

using namespace std;

class Bank
{
	private:
        char *name;
		long accnumber;
		char acctype[50];
	    float balance;

	public:
		long depo;
		long accno=0;
	    
		Bank()     //default constructor
		{         
			string name="defaultName";
			cout<<"\nCustomer Name:"<<name<<endl;
			long accnumber = 123456789012;
			cout<<"\nAccount_Number:"<<accnumber<<endl;
			string acctype="Savings";
			cout<<"\nType_of_Account:"<<acctype<<endl;
			float balance=0;
			cout<<"\nAccount_Balance:"<<balance<<endl;
		}																																						        
		~Bank(){}
		
		void getdetails();																								
		void deposit();
		void withdrawal();
		void newaccount();
		void viewaccdetails();
};
