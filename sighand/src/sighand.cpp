#include <sighand.h>

static void signal_handler(int ID)
{
	cout<<"\nInterrupt signal is ID : "<<ID<<endl;
	if(ID == 4)
	{ 
		cout<<"\n Seg core dump\n"<<endl;
		exit(EXIT_SUCCESS);
	}
}

char user[SIZE] = "Welcome User!";
char *buf;

void Signal_handler (int sig_num)
{   
	cout<<buf<<&user<<endl;
	exit(EXIT_SUCCESS);
}

int main()
{

	signal(SIGUSR1, Signal_handler);
	cout<<"\n Received SIGUSR1 is : "<<user<<endl;

	char str1[SIZE] = "Hello";																		   
	buf = strcat( str1, " Program" );
	cout<<"\n Concatenated string is : "<<str1<<endl;
																										   				int count=0;
	signal(SIGILL, signal_handler);
	while (++count) 
	{
		cout << "\n Hello all! Welcome!" << endl;       
		if (count == 3)
    	raise(SIGILL);
    }	
																														return 0;
}


