#include <iostream>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <errno.h>

using namespace std;

int main()
{
	int msgid;
	msgid=msgget((key_t)20,IPC_CREAT);
//	if(msgid<-1)
//	{
//		perror("msgget() error");
//		cout<<"Error no: "<<errno<<endl;
//	}
	cout<<"\n Message queues successfully created with key: "<<msgid<<endl;

	return(EXIT_SUCCESS);

}
