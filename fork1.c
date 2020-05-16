#include<stdio.h>
#include<unistd.h>
	int main()
{       while(1)
	{
		pid_t process=fork();
		pid_t Pid1=getpid();
		pid_t PPid1=getppid();
		usleep(10000000);
		printf("%d,%d,helloworld\n",Pid1,PPid1);
	}
	return 0;
}
