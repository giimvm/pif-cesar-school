#include <stdio.h>

int main (){
    const char canto_superior_esquerdo = '\xC9';
    const char canto_superior_direito = '\xBB';
    const char canto_inferior_esquerdo = '\xC8';
    const char canto_inferior_direito = '\xBC';
    const char linha_horizontal = '\xCD';
    const char linha_vertical = '\xBA';

    printf("%c%c%c%c\n", canto_superior_esquerdo, linha_horizontal, linha_horizontal, canto_superior_direito);
    printf("%c  %c\n", linha_vertical, linha_vertical);
    printf("%c%c%c%c\n", canto_inferior_esquerdo, linha_horizontal, linha_horizontal, canto_inferior_direito);

    return 0;
}