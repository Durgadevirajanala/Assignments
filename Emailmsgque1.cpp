#include <iostream>
#include <sys/msg.h>
#include <sys/ipc.h>
#include <sys/types.h>
#include <cstring>
#include <string>
#include <bits/stdc++.h>
#include <sys/wait.h>

#define PERMS 0666
#define MAXBUF 20

using namespace std;

struct msg_buf
{
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

	string userName,domainName;
	char symbol=@;

