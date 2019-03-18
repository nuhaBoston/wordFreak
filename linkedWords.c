#include <linkedWords.h>

word* Word(char* string, int freq, word *next){
    word* newWord = (word*)malloc(sizeof(word));
    if(newWord == NULL){
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
word* checkWord(word* WordList, char* bufferWord){

    word* curr = WordList->next;
    
    while(curr != NULL){
        if(strcmp(curr -> string, bufferWord) == 0){
            curr -> freq++;
            return curr;
        }
        else{

            curr = curr -> next;
        }
    }
    
    curr -> next = Word(bufferWord, 1, NULL);

    return curr;


}