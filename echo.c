#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int start_index = 1;
    int add_newline = 1;

    if (argc > 1 && strcmp(argv[1], "-n") == 0) {
        start_index = 2;
        add_newline = 0;
    }

    for (int i = start_index; i < argc; i++) {
        printf("%s", argv[i]);

        if (i < argc - 1) {
            printf(" ");
        }
    }

    if (add_newline) {
        printf("\n");
    }

    return 0;
}