#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000
#define MAX_WORDS 100

// Function to reverse the order of words
void reverse(char words[][MAX_LEN], int wc) {
    int start = 0;
    int end = wc - 1;
    while (start < end) {
        // Swap words[start] and words[end]
        char temp[MAX_LEN];
        strcpy(temp, words[start]);
        strcpy(words[start], words[end]);
        strcpy(words[end], temp);
        start++;
        end--;
    }
}

// Function to extract words from the input string
void extract_words(char *str) {
    char words[MAX_WORDS][MAX_LEN];
    int i = 0, j = 0, word_count = 0;

    // Extract words from the input string
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] != ' ' && str[i] != '\t') {
            words[word_count][j++] = str[i];
        } else if (j > 0) {
            words[word_count][j] = '\0';
            word_count++;
            j = 0;

            // Skip any extra spaces
            while (str[i] == ' ' || str[i] == '\t') {
                i++;
            }
            continue;
        }
        i++;
    }

    // Add the last word if there was no trailing space
    if (j > 0) {
        words[word_count][j] = '\0';
        word_count++;
    }

    // Print extracted words
    printf("Extracted words:\n");
    for (int i = 0; i < word_count; i++) {
        printf("%s\n", words[i]);
    }

    // Reverse the order of words
    reverse(words, word_count);

    // Print reversed sentence
    printf("Reversed sentence:\n");
    for (int i = 0; i < word_count; i++) {
        printf("%s", words[i]);
        if (i < word_count - 1) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    char sentence[MAX_LEN];

    printf("Enter the input sentence:\n");
    fgets(sentence, MAX_LEN, stdin);

    extract_words(sentence);

    return 0;
}
