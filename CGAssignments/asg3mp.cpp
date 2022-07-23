#include <iostream>
#include <signal.h>
#include <cstring>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <fstream>
#include <string>
#include <time.h>

using namespace std;

int create(char *asg3mp, char *argv[])
{
	int pid;
	execvp(asg3mp,argv);
	pid = fork();
//	execvp(asg3mp,argv);
	if (0 == pid)
	{
//		execvp(asg3mp,argv);/* executes pgm searching for the path in “PATH” environment variable */
		perror("execvp"); /* the execvp function returns only if an error occurs */
		exit(0);
	}
	else
	{
		wait(NULL);
		printf("Inside parent process\n");
	}
}
int main()
{
	char *argv[]={"ls","-l",NULL}; /*List of NULL terminated arguments */
	create("ls",argv);
	return 0;
}
