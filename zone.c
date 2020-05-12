#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int gval=100;
int main()
{

	pid_t pid=fork();
	if(pid==0){
		gval=10;
		printf("this is child:%d-gval=%d\n-%p\n",pid,gval,&gval);
	}else if(pid>0){
		sleep(2);
		printf("this is parent:%d-gval=%d\n-%p\n",pid,gval,&gval);
	}
	return 0;
}
