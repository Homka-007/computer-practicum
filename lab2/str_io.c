#include <stdio.h>
#include "str_io.h"

void input_str(char *str, int max_len) {
    int i = 0;
    int ch;
    printf("enter str: ");
    while ((ch = getchar()) != EOF && ch != '.' && i < max_len - 1) {
        str[i++] = (char)ch;
    }
    if (ch == '.') {
        str[i++] = '.';
    }
    str[i] = '\0';
}

void print_str(const char *str) {
    printf("Result: %s\n", str);
}