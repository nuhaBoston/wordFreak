
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>

/*i need to open the txt read it and count the word frequencies and then write another txt to count the frequencies*/


 int main(int argc, char *argv[]){

    int fd = open(argv[1],O_RDONLY | O_CREAT);

  char article[fd]; 

  if(argc < 2){
      write(fd, 300, 1000);

  }

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