
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
#include "linkedWords.h"


int isAlpha(char alpha);

char* bufferWord(char BUFFER[100],int argc, const char *argv[]);

/*i need to open the txt read it and count the word frequencies and then write another txt to count the frequencies*/


 int main(int argc, const char *argv[]){

     char BUFFER[100];

     //initialize word linkedlist
    word* HeadWord = Word(NULL,0,NULL);

  if(argc < 1){
      //means an environment or a single argument
         
    char* fd1 = getenv("WORD_FREAK");
    
    if(fd1 != NULL){
       bufferWord(BUFFER,argc, argv); 
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

//stdin should be last
  if(argc == 1){
      //means stdin
      //means stdout
      int fd1 = open(argv[1],O_RDONLY);
  }


//checking to see if argc is less than or equal to 
 if(argc <= 0){
    exit(1);
 }
 
 close(fd);


     return 0;

 
 }


//buffer to read in word char by char
char* bufferWord(char BUFFER[100],int argc, const char *argv[]){
    int i = 0;
    int j = 0;
    int count = 0; 
    int readc = 1;
    int fd;
    int k = 0;
    //initialized my buffer
    char BUFFER[100];
    for(i = 0; i < 99; i++){
        BUFFER[i] = (char)malloc(sizeof(char));
    }
    //read the words from each argument 
    for(k = 1; k < argc; k++){
        fd = open(argv[k], O_RDONLY);
        if(fd == -1){
            exit(EXIT_FAILURE);
        }
        else if(fd != -1){
            int rdc = read(fd, &BUFFER[count], 1);
            while(rdc)
               int cdc = close(fd);
               if(cdc == -1){
                   exit(EXIT_FAILURE);
               }
            }
        }
    }


    return BUFFERWORD;
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
    else
        return 1;

}   





