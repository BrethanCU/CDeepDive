#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>

#define MICRO_SEC_IN_SEC 1000000

int main ()
{
	int i;
	struct timeval start, end; 

	pid_t pid;
	char *message;
	int n;
	
	printf("fork program starting\n");
	
	gettimeofday(&start, NULL);
	pid = fork();
	gettimeofday(&end, NULL);

	switch(pid)
	{
	case -1:
		perror("fork failed");
	case 0:
		message = "This is the child";
		printf("child process: the value returned by forks is %d\n", getpid());	
		n = 3;
		printf("Time it took to fork a child: %ld micro sec\n", ((end.tv_sec*MICRO_SEC_IN_SEC + end.tv_usec)
								- (start.tv_sec * MICRO_SEC_IN_SEC + start.tv_usec)));

		break;
	
	default:
		message = "This is the parent";
		printf("pid of the parent %d\n", pid);
		n = 5;
		break;
	}
	
	for (; n>0; n--){
		puts(message);
		sleep(1);
	}

	exit(0);
}
