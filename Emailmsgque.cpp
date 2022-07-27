#include <iostream>
#include <sys/msg.h>
#include <sys/ipc.h>
#include <sys/types.h>
#include <cstring>
#include <string>
#include <bits/stdc++.h>
#include <sys/wait.h>

#define PERMS 0666
#define MAXBUF 20

using namespace std;

class Email
{
	private:
		string userName;
		string domainName;
		char symbol;	
	public:
		Email(){}
		
		Email(char s)
		{
			symbol=s;
		}
		
		void Details()
		{
			cout<<"Enter User Name: "<<endl;
			cin>>userName;
			cout<<symbol<<endl;
			cout<<"Domain Name: "<<endl;
			cin>>domainName;
		}

		void Validate()
		{
			if(domainName =="abc.com")
			{
				cout<<"Valid Email ID"<<endl;
				Display();
			}
			else
			{
				cout<<"Invalid Email ID"<<endl;
			}
		}
		
		void Display()
		{
			cout<<"Valid User Email ID is: "<<userName<<symbol<<domainName<<endl;
		}
};
int main()
{
	Email obj('@');
	obj.Details();
	obj.Validate();
	
	int pid=fork();
	if(pid==0)
	{
		obj.Validate();
//		if(domainName=="abc.com")
{
		cout<<"Invalid Email ID"<<endl;
		exit(EXIT_FAILURE);}
	}
	else
	{
		wait((int *)0);

		{
			obj.Display();
		}
	}
	return 0;
}
	
