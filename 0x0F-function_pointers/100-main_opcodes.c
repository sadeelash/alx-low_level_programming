#include <stdio.h>
#include <stdlib.h>

void print_opcodes(unsigned char *ptr, int num_bytes) {
    for (int i = 0; i < num_bytes; i++) {
        printf("%02x", *ptr);
        ptr++;
        if (i < num_bytes - 1) {
            printf(" ");
        }
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    int num_bytes = atoi(argv[1]);

    if (num_bytes < 0) {
        printf("Error\n");
        return 2;
    }

    void (*main_ptr)(void) = &main;

    unsigned char *opcode_ptr = (unsigned char *)main_ptr;

    print_opcodes(opcode_ptr, num_bytes);

    return 0;
}

