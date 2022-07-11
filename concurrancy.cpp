#include <iostream>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

int main()
{
	int pid,n;
	n=1;
	for(;;)
	{
	pid=fork();
	if(pid>0)
	{
	
		cout<<"MAX no of concurrent process are = "<<2*n<<endl;
		cout<<"MAX no of children process are = "<<(2*n)-1<<endl;
	}
	if(pid==0)
	{
		n++;
		cout<<"MAX no of concurrent process are = "<<2*n<<endl;
	}
	return 0;
}	
}
