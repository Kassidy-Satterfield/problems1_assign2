#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "problem1.h"
#define num 4

int main()
{
    char key[30];
    int num_words = num;

    char *strings[] = {
    "string1",
    "string2",
    "string3",
    "string4"};

    printf("enter a search key: ");
    scanf("%s", key);


    find_word(strings, key, num_words);
}