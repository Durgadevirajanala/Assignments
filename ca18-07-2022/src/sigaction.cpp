#include <sigaction.h>
volatile sig_atomic_t unprocessedSig = 0;

void sigHandler(int sigNum)
{
	if(sigNum == SIGINT)
		unprocessedSig = 1;
}

int main()
{
	cout<<"\n PID: "<<getpid()<<endl;

	struct sigaction act;

	act.sa_handler = &sigHandler;
	
	sigfillset(&act.sa_mask);
	act.sa_flags = SA_RESTART;

	if(sigaction(SIGINT,&act,NULL) == -1)
	{
		perror("sigaction");
		exit(EXIT_FAILURE);
	}

//	cout<<"\nKill the process using  kill -9 pid"<<endl;
	cout<<"\nKill the process using  killall -9 sigaction"<<endl;
	while(1)
	{
		if(unprocessedSig)
		{
			unprocessedSig=0;
			cout<<"\n SIGINT has occured"<<endl;
		}
	}
	return 0;
}
