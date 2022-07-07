#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

void main() {
   if(fork()!=0)  {
       printf("Enter the number: ");
       int n;
       scanf("%d",&n);

       for(int i=2;i<n/2+1;++i) {
           if(n%i==0) {
               printf("%d is not prime\n",n);
               exit(0);
           }
       }

       printf("%d is prime\n",n);
   }
}