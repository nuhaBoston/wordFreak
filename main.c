
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
#include "arrayforfrequency.h"

/*i need to open the txt read it and count the word frequencies and then write another txt to count the frequencies*/


 int main(int argc, const char *argv[]){

     //initialize word linkedlist
     word* HeadWord = word(NULL,O,NULL);



  if(argc < 1){
      //means an environment or a single argument
         
    char* fd1 = getenv("WORD_FREAK");
    
    if(fd1 != NULL){
       jyyou; 
    }
      

  }
     
     //array for our words 
     char BUFFER[100];

     int i = 0;

     int fd = open(argv[1],O_RDONLY);

   /* for(i = 1; i < argc-1; i++){
         while(fd)
     }*/

    
    
    int fd1 = open("wordFreq.c", O_RDWR);

  char article[fd]; 

  if(argc > 2){
      write(fd, 300, 1000);

  }
 /* write(STDOUT_FILENO,&) */


  if(argc == 1){
      //means stdin
      //means stdout
      int fd1 = open(argv[1],O_RDONLY);
      fd1 = read(STDIN_FILENO,&BUFFER[count],1);
  }



 if(fd < 0){
    exit(EXIT_FAILURE);
 }
  else{
  read(fd, article, sizeof(article)-1);
  printf("%s", &article);
  }
 
 close(fd);


     return 0;
 }

//checking to see if character is actually a valid character
//return 0 if false and 1 if true
int isAlpha(char alpha){
    if(alpha == '.'){
        return 0;
    }
    else if(alpha == '!'){
        return 0;
    }
    else if(alpha == '*'){
        return 0;
    }
    else if(alpha == '-'){
        return 0;
    }
    else if(alpha == ' '){
        return 0;
    }
    else if(alpha == '?'){
        return 0;
    }
    else{
        return 1;
    }

}
//buffer to read in word char by char
char* bufferWord(char BUFFER[100]){
    int i = 0;
    int count = 0; 
    BUFFER = (char)(calloc(100,sizeof(char)));
    for(i = 0; i < 99; i++){
        BUFFER[i] = (char)malloc(sizeof(char));
    }



}