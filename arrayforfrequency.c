#include <arrayforfrequency.h>

word* Word(char* string, int freq, word *next){
    word* newWord = (word*)malloc(sizeof(word));
    if(newWord == NULL){
        printf("malloc failed\n");
        exit(EXIT_FAILURE);
    }    
    newWord -> string = (char*)malloc(120*sizeof(char));
    strcpy(newWord -> string, string);
    newWord -> freq = freq;
    newWord -> next = next; 
    return newWord;
}

//if word is in the linked list
//if it is then increase freq. else create new word
char* checkWord(word* Word){
    

}