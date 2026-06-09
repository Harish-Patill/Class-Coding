#include <stdio.h>

int main() {
    FILE *add = fopen("hello.txt", "r");

    int ch;
    while ((ch = fgetc(add)) != EOF) {
        putc(ch, stdout);
    }

    fclose(add);
    return 0;
}