#include<stdio.h>
#include<unistd.h>

void main() {
    for(int i=0;i<5;++i) {
        printf("Hello\n");
        sleep(1);
    }
}