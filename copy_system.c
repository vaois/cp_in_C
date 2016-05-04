#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>

int main(int argc,char *argv[])
{
    char c;
    int in, out;
    if (argc < 3)
    {
	printf("Usage:copy filename newname\n");

    }
    
    in = open(argv[1],O_RDONLY);
    if(in = -1)
    {
    	printf("\"%s\"  %s\n",argv[1],strerror(errno));
    }
    out = open(argv[2],O_WRONLY|O_CREAT, S_IRUSR|S_IWUSR);
    while(read(in,&c,1)==1)
          write(out,&c,1);
    exit(0);
}

