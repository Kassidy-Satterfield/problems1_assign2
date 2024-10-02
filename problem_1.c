#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *find_word(char *words[], char *key, int num_words)
{
    for(int i = 0; i < num_words; i++)
    {
        if(strcmp(words[i], key) == 0)
        {
            return words[i];  // matching word
        }
    }
    return NULL;
}


