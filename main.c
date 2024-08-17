#include <stdio.h>
#include <stdlib.h>
#include "wordlib.h"

#define MAX_LENGTH 100

int main() {
    char word1[MAX_LENGTH];
    char word2[MAX_LENGTH];

    printf("Enter the first word: ");
    if (fgets(word1, MAX_LENGTH, stdin) == NULL) {
        printf("Error reading first word.\n");
        return 1;
    }
    word1[word_length(word1) - 1] = '\0';

    printf("Enter the second word: ");
    if (fgets(word2, MAX_LENGTH, stdin) == NULL) {
        printf("Error reading second word.\n");
        return 1;
    }
    word2[word_length(word2) - 1] = '\0';
  
    printf("Length of word1: %d\n", word_length(word1));
    printf("Length of word2: %d\n", word_length(word2));

    char *joined_words = join_words(word1, word2);
    if (joined_words != NULL) {
        printf("Joined words: %s\n", joined_words);
        free(joined_words);
    }

    int comparison_result = compare_words(word1, word2);
    if (comparison_result == 0) {
        printf("The words are the same\n");
    } else {
        printf("The words are different\n");
    }

    return 0;
}