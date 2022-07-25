#include <iostream>
#include <sys/msg.h>
#include <sys/ipc.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#define PERMS 0666
#define MAXBUF 10

using namespace std;

struct msg_buf{
	long msg_type;
	char msg_txt[100];
};

typedef struct msg_buf MSG;

int main()
{
	MSG m;

	key_t key;
	int msgid;
	// to gen unique key
	key = ftok("myfile", 100);

	msgid = msgget(key, PERMS | IPC_CREAT);
	if(msgid<0)
	{
		perror("msgget() error");
		exit(EXIT_FAILURE);
	}
	int pid=fork();
	if(pid==0)
	{
	m.msg_type = 1;
	cout<<"\nEnter a msg to be sent from child\n";
	fgets(m.msg_txt, MAXBUF, stdin);

	msgsnd(msgid, &m, sizeof(m),0);

	cout<<"\nTransfered data : "<<m.msg_txt<<endl;
	}
	else
	{
	if(pid>0)
	{
	 while(msgrcv(msgid, &m, sizeof(m),1,0)){
	  
	           cout<<"\nParent Received data in : "<<m.msg_txt<<endl;
	       }
	     msgctl(msgid, IPC_RMID, NULL);
	}
	}
	return (EXIT_SUCCESS);
}
