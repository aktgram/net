#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>

void main()
{
	int n,fd;
	char buff[50];
	
	printf("Enter text to write in the file: ");
	n=read(0, buff, 50);

	fd=open("file.txt",O_CREAT | O_RDWR, 0777); 
	
	write(fd, buff, n);
	write(1, buff, n);

	int close(int fd);
}
