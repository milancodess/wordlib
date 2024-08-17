#ifndef WORDLIB_H
#define WORDLIB_H

// Function to count the length of a word
int word_length(const char *word);

// Function to join two words with a space in between
char* join_words(const char *first_word, const char *second_word);

// Function to compare two words
int compare_words(const char *first_word, const char *second_word);

#endif // WORDLIB_H