# WordLib

A simple C library for counting word lengths, joining two words, and comparing two words.

## Functions

- `int word_length(const char *word)`: Returns the length of the given word.
- `char* join_words(const char *first_word, const char *second_word)`: Joins two words with a space in between and returns the result.
- `int compare_words(const char *first_word, const char *second_word)`: Compares two words and returns 0 if they are the same, a non-zero value if they are different.

## Usage

1. Clone the repository:
   ```sh
   git clone https://github.com/milancodess/wordlib.git
   cd wordlib
   ```

2. Build the project:
   ```sh
   make
   ```

3. Run the executable:
   ```sh
   ./main
   ```

4. Follow the prompts to enter the words and see the results.

## Cleaning Up

To remove the compiled files, run:
```sh
make clean
```

## License

This project is licensed under the MIT License.