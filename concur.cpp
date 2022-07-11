#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

using namespace std;

int main()
{
	int pid;
    int i = 1;
	pid=fork();
	fork();
	{   
		cout<<"Hello All"<<endl;
	}
	if(pid==0)
	{
		cout<<"Child Process"<<endl;
		cout<<"child PID = "<<getpid()<<endl;
		cout<<"child PPID = "<<getppid()<<endl;
	}
	else
	{
		cout<<"Parent Process"<<endl;
		cout<<"Parent PPID = "<<getppid()<<endl;
		cout<<"Parent PPID = "<<getppid()<<endl;
	}
	//cout<<"MAX no of concurrent process are"<<i<<endl;

	//	 if(pid == 0)
	//	 i++;
	// else
	  
   return 0;
																													}
