#include <iostream>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>

using namespace std;

int main()
{
	int msgid;
	msgid=msgget((key_t)20,IPC_CREAT);
	cout<<"\n Message queues successfully createdwith key: "<<msgid<<endl;

	return EXIT_SUCCESS;

}
