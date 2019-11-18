#include <stdio.h>

#define chiff_key "1910555020"

int main() {
    int ch, chiff_key_length = 10, counter = 0;

    while ( (ch = fgetc(stdin)) != EOF){

        if (counter > chiff_key_length) counter = 0;

        counter++;
        ch = ch ^ chiff_key[counter];
        fputc(ch, stdout);
    }

    return 0;
}