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

char* word_name(word* Word){
    return Word -> string;
}

char* createNewWord(word* Word){
    
}