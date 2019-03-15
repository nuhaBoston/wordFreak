#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <stdlib.h>
#include <stdio.h>


 int main(int argc, char *argv[]){

     int fd = open(argv[1], O_RDONLY);

  char article[fd]; 

 if(fd < 0){
    printf("File does not exist!");
 }
  else{
  read(fd, article, sizeof(article)-1);
  printf("%s", &article);
  }
 
 close(fd);


     return 0;
 }