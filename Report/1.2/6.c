#include<stdio.h>
#include<unistd.h>

void main() {
    if(fork()==0) 
        printf("Child process id: %d\n",getpid());
    else
        printf("Parent process id: %d\n",getpid());
}