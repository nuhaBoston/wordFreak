#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/*hashmap to store words and their frequencies */

typedef struct{
    char* string;
    int freq;
    word* next;
}word;


word* Word(char* string, int freq, word *next);

char* checkWord(word* Word, char* bufferWord);








