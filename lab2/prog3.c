#include <stdio.h>
#include <ctype.h>
#include "str_io.h"

#define MAX_LEN 256
#define NUM_LETTERS 26

void count_let(const char *str) {
    int counts[NUM_LETTERS] = {0};
    int total_latin = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha((unsigned char) str[i])) {
            char lower = (char)tolower((unsigned char)str[i]);
            if (lower >= 'a' && lower <= 'z') {
                counts[lower - 'a']++;
                total_latin++;
            }
        }
    }

    printf("Latin letters stat");
    printf("Total count:  %d\n", total_latin);
    for (int i = 0; i < NUM_LETTERS; i++) {
        if (counts[i] > 0) {
            printf("Letter %c: %d\n", 'a' + i, counts[i]);
        }
    }

}

int main(void) {
    char buffer[MAX_LEN];
    input_str(buffer, MAX_LEN);
    print_str(buffer);
    count_let(buffer);
    return 0;
}