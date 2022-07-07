#include<stdio.h>
#include<unistd.h>

void main() {
   if(fork()==0) 
       printf("Child\n");
   else
       printf("Parent\n");
}