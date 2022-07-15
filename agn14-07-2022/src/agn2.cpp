#include <iostream>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

 using namespace std;
 int g_value =10; /* global variable */
 int main()
 {
 	int pid;
	int l_value =5;
	cout<<"Writing a sample code\n";
	pid = fork(); /* fork() returns 0 to child process and process id of child to parent process*/
	if(0 == pid)
	{
		cout<<"For child Local variable valued and  global variable value are:"<<l_value<<" and "<<g_value<<endl;
		exit(0);
	}
	else
	{
		cout<<"For Parent Local variable valued and  global variable value are:"<<l_value<<" and "<<g_value<<endl;
	}
	cout<<"Code common for both parent process and child process\n";
		return 0;
}
