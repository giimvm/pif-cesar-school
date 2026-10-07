#include <stdio.h>

int main() {
    int codigo;

    printf("DEC\tHEX\tCHAR\n");
    printf("--------------------\n");

    for (codigo = 32; codigo <= 126; codigo++) {
        printf("%d\t%X\t%c\n", codigo, codigo, codigo);
    }

    return 0;
}