#include<stdio.h>
#include<unistd.h>
#include<ctype.h>
#include<string.h>

void main() {
    char string[30];
    printf("Enter string:");
    scanf("%[^\n]s",string);

    if(fork()==0) {
       for(int i=0;i<strlen(string);++i)
            if(islower(string[i]))
                string[i] = toupper(string[i]);
    
       printf("\nModified string: %s\n",string);
    }
}