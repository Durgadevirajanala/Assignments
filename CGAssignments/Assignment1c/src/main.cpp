#include <1c.h>

char* newname;

void updateName(char *newname)
{
 	cout<<"Do you want to change the Name? press Y/N"<<endl;

	char cmd=' ';
	
	if(cmd=='Y')
	{   
		cout<<"Enter the New name you want to update"<<endl;
		cin>>newname;
		char* name = newname;
	   	cout<<"\nUpdated Name is: "<<name<<endl;   
	}
}

int main()
{
	char ch;
	static int i=0;
	Bank *a[10];
	int x,k;
	do
		{
			cout<<endl<<endl<<"************MENU************"<<endl;
			cout<<"            ----            "<<endl;
			cout<<"1.Create new account\n2.Deposit\n3.Withdraw\n4.View account details\n\n";
			cout<<"Enter choice no.: ";
			cin>>x;
			switch(x)
			{	
				case 1:
					{
						i++;
						a[i]=new Bank;
						a[i]->newaccount();
						break;
					}
				case 2:
					{
						cout<<"Enter account no.: ";
						cin>>k;
						a[k]->deposit();
						break;
					}
				case 3:
					{
						cout<<"Enter account no.: ";
						cin>>k;
						a[k]->withdrawal();
						break;
					}
				case 4:
					{
						cout<<"Enter account no.: ";
						cin>>k;
						a[k]->viewaccdetails();
						break;
					}
			}
			cout<<"\nDo you wish to continue[Press 'Y' to continue or 'N' to exit menu]: ";
			cin>>ch;
		}
	while(ch=='y'||ch=='Y');
}

