#include <iostream>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

int main()
{
	int pid,n;

	n=1;
	fork();
	{   
		cout<<"Hello All"<<endl;
	}

	cout<<"MAX no of concurrent process are = "<<2*n<<endl;
    return 0;
																													}
