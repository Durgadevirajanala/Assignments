
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <quick.h>

using namespace std;

int main(int argc,char* argv[])
{
	int i=0, j=0, pid,n;
	n=stoi(argv[1]);
	pid = fork();
	if(pid == 0)
	{
		for(i=1;i<=n;i++){
			if(i%2!=0)
				cout <<i<<endl;
		}
		cout <<"End of Child"<<endl;
	}
	else
	{
		if(pid>0){
			for(j=1;j<=n;j++){
				if(j%2==0)
				cout<<"\t"<<j<<endl;
			}
		}
	int status;     
    waitpid(pid, &status, 0);
	cout<<"Parent Ends"<<endl;
	if ( WIFEXITED(status) )
	{
		int exit_status = WEXITSTATUS(status);
		cout <<"Exited Normally ,\t Exit Status "<<exit_status<<endl;
		return EXIT_SUCCESS;
	}
	else{
	    int exit_status = WEXITSTATUS(status);
		cout <<"Child Exited abnormally ,\t Exit Status: "<<exit_status<<endl;
		return EXIT_FAILURE;
	}
	}
	return 0;
}
