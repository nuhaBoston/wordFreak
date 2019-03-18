
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
#include "linkedWords.h"


int isAlpha(char alpha);

word* bufferWord(char BUFFER[100],int argc, const char *argv[], word* HeadWord);

/*i need to open the txt read it and count the word frequencies and then write another txt to count the frequencies*/


 int main(int argc, const char *argv[]){


     char BUFFER[100];

     //initialize word linkedlist
    word* HeadWord = Word(NULL,0,NULL);

    //checking to see if argc is less than or equal to 0
    if(argc <= 0){
    exit(1);
    }

    //checking if you more than 2 arguments 
    if(argc > 1){
        //for one or more argument
        for(int i = 1; i < argc; i++){
           int fd = open(argv[1], O_RDONLY); 
           //checks if it opens properly
           if(fd < 0){
               exit(1);
           }
           else {
               bufferWord(BUFFER,argc,argv,HeadWord);

           }
        
        }
     }

      
      
      


    //means an environment or stdin argument

    if(argc == 1){
         
    char* fdEnviron = getenv("WORD_FREAK");
    
    if(fdEnviron != NULL){
       int fd2 = open(fdEnviron, O_RDONLY);
       //checking if it opens correctly
        if(fd2 < 0){
            exit(1);
        }
        else{
       bufferWord(BUFFER,argc, argv, HeadWord); }
    }

    else{
        int fd2 = open(0, O_RDONLY);
         if(fd2 < 0){
            exit(1);
        }
        bufferWord(BUFFER,argc, argv,HeadWord);
    }
   
      

  }
     
     //array for our words 
     char BUFFER[100];

     int i = 0;

     int fd = open(argv[1],O_RDONLY);



 
 int cd = close(fd);
  
  if(cd < 0){
      exit(1);
  }


     return 0;

 
 }


//buffer to read in word char by char
word* bufferWord(char BUFFER[100],int argc, const char *argv[], word* HeadWord){
    int i = 0;
    int j = 0;
    //for keeping track of where in the BUFFER you are
    int count = 0; 
    //fd is file descriptor
    int fd;
    //rd is read int
    int rd;
    //cd is close int
    int cd;
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
            int rd = read(fd, &BUFFER[count], 1);
            if(rd == 0){
                int cd = close(fd);
                 if(cd == -1){
                   exit(EXIT_FAILURE);
               }
            }
            else{
                while(rd > 0){
                    if(isAlpha(BUFFER[count])){
                        count++;
                    }
                    else{
                        BUFFER[count] = NULL;
                        char* newWord = (char*)malloc(100);
                        strncpy(newWord,BUFFER,count);
                        checkWord(HeadWord, newWord); 
                        count = 0; 
                    }


              
                }
            }
        }
    }


    return HeadWord;
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







