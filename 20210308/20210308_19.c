#include<stdio.h>
#include<unistd.h>
#include<stdlib.h> 
#include<fcntl.h>

int main(int argc,char *argv[]){ 
	int fd, i, ch; 
	for (i = 1; i < argc; i++) {                   
		fd = open(argv[1],O_RDONLY);           
		if(fd < 0){ 
			perror("open"); 
		  return -1;
		} 
		while(read(fd,&ch,1)){
			write(STDOUT_FILENO,&ch,1);
    }
		close(fd);
	}
  return 0;
}