#include <arrayforfrequency.h>

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
    word* prev = WordList;
    word* curr = WordList->next;
    
    while(curr != NULL){
        if(strcmp(curr -> string, bufferWord) == 0){
            int num = curr -> freq;
            num++;
            curr -> freq = num;
            return curr;
        }
        else{
            prev = curr;
            curr = curr -> next;
        }
    }
    
    curr = word(BUFFERWORD, 1, NULL);

    return curr;


}