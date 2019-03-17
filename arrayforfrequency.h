#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/*hashmap to store words and their frequencies */

typedef struct word{
    char* string;
    int freq;
    struct word *next;
}word;

word* newWord(char* string, int freq, word *next);






