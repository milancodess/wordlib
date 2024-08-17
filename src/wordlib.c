#include <stdio.h>
#include <stdlib.h>
#include "wordlib.h"

int word_length(const char *word) {
    int length = 0;
    while (word[length] != '\0') {
        length++;
    }
    return length;
}

char* join_words(const char *first_word, const char *second_word) {
    int first_length = word_length(first_word);
    int second_length = word_length(second_word);
    int total_length = first_length + second_length + 2; // 1 for space, 1 for null terminator

    char *result = (char *)malloc(total_length * sizeof(char));
    if (result == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }

    // Copy first word
    for (int i = 0; i < first_length; i++) {
        result[i] = first_word[i];
    }

    // Add space
    result[first_length] = ' ';

    // Copy second word
    for (int i = 0; i < second_length; i++) {
        result[first_length + 1 + i] = second_word[i];
    }

    // Null terminate the result
    result[total_length - 1] = '\0';

    return result;
}

int compare_words(const char *first_word, const char *second_word) {
    int i = 0;
    while (first_word[i] != '\0' && second_word[i] != '\0') {
        if (first_word[i] != second_word[i]) {
            return 1; // Words are different
        }
        i++;
    }
    if (first_word[i] == '\0' && second_word[i] == '\0') {
        return 0; // Words are the same
    } else {
        return 1; // Words are different
    }
}