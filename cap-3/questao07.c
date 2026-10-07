#include <stdio.h>

void usandoFor() {
    int i;

    for (i = 0; i <= 100; i++) {
        printf("%d\n", i);
    }
}

void usandoWhile() {
    int i = 0;

    while (i <= 100) {
        printf("%d\n", i);
        i++;
    }
}

void usandoDoWhile() {
    int i = 0;

    do {
        printf("%d\n", i);
        i++;
    } while (i <= 100);
}

int main() {
    printf("Versao com for:\n");
    usandoFor();

    printf("\nVersao com while:\n");
    usandoWhile();

    printf("\nVersao com do-while:\n");
    usandoDoWhile();

    return 0;
}

/*
A estrutura mais adequada para este caso é o for,
pois sabemos antecipadamente o valor inicial (0),
o valor final (100) e o incremento (+1). O for
permite reunir inicialização, condição e incremento
em uma única instrução, tornando o código mais
organizado e mais fácil de compreender. As estruturas
while e do-while também resolvem o problema, porém
exigem que a inicialização e o incremento sejam escritos
separadamente. Além disso, o do-while é mais indicado
quando o bloco precisa ser executado pelo menos uma vez,
o que não é uma necessidade específica deste problema.
*/