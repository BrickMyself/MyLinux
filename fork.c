/*这个代码是用来演示fork创建子进程；并且体会子进程的运行过程*/
#include<stdio.h>
#include<unistd.h>

int main()
{
	int i=0;
	printf("hiworld\n,getpid()");
	//pid_t fork();
	pid_t pid=fork();
	if(pid==0)
	{
		printf("this is childprocess");
	}
	else if(pid >0)
	{
		printf("this is parentprocess");
	}
	printf("ret_pid:%d\n",pid);
	while(1){
		usleep(1000000);
		printf("helloworld\n");
	}
}
