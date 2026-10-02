#include <stdio.h>
#include "str_io.h"

#define MAX_LEN 256

void reverse_word(char *start, char *end) {
    while (start < end) {
        char tmp = *start;
        *start = *end;
        *end = tmp;
        start++;
        end--;
    }
}

void invert_words(char *str) {
    char *w_start = NULL;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '.' && str[i] != '\t' && str[i] != '\n') {
            if (w_start == NULL) {
                w_start = &str[i];
            }
        } else {
            if (w_start != NULL) {
                reverse_word(w_start, &str[i - 1]);
                w_start = NULL;
            }
        }
    }
}

int main() {
    char buffer[MAX_LEN];
    input_str(buffer, MAX_LEN);
    invert_words(buffer);
    print_str(buffer);
    return 0;
}