#include<stdio.h>
#include<unistd.h>

void main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int len=10;

    if(fork()!=0) {
        int sum=0;
        for(int i=0;i<len;++i)
            if(arr[i]%2==0)
                sum+=arr[i];
        
        printf("Sum of even numbers: %d\n",sum);
    }

    else {
        int sum=0;
        for(int i=0;i<len;++i)
            if(arr[i]%2!=0)
                sum+=arr[i];
        
        printf("Sum of odd numbers: %d\n",sum);
    }
}