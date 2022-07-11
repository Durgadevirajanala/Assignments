#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    pid_t pid;
	    int i = 1;

		    for(;;)
			    {
				        pid = fork();
						        if(pid < 0)
								            printf("MAX no of concurrent process are %d\n",i);

											        if(pid == 0)
													            i++;
																        else
																		        {
wait(0);
																							            _exit(0);
																										        }
																												    }

																													    return 0;
																														}
