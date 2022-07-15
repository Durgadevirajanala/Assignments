#include <sigchld.h>

int pid,i;

static void func1(int id)
{	
	cout<<"\n i = "<<i<<endl;
	cout<<"Child Died"<<endl;
	wait(NULL);
	cout<<"ID: "<<id<<endl;					
}

int main(int argc,char* argv[])
{	
	int k,l,n;
	n=stoi(argv[1]);
	signal(SIGCHLD, func1);
	pid = fork();
			
	if(pid == 0)
	{
		sleep(1);
		cout<<"Child Process"<<endl;							
		for(k=1;k<=n;k++)
		{	
			if(k%2==0)
				cout<<k<<endl;
		}
		cout<<"Even Numbers in child process upto "<<n<<" are printed above"<<endl;
	}	
	else
	{
		wait(0);
			for(l=1;l<=n;l++)
			{
				if(l%2!=0)
					cout<<l<<endl;
			}
		cout<<"Odd Numbers in parent process upto "<<n<<" are printed above"<<endl;	
		cout<<"Parent Process"<<endl;
		for(int i=0;i<10000;i++);
		cout<<"\nParent Dies"<<endl;
	}

	return 0;
}
