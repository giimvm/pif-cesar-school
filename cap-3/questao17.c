#include <stdio.h>

int main() {
    float nota, soma = 0.0, media;
    float maiorNota, menorNota;
    int totalAlunos = 0;

    printf("Digite as notas da turma (-1 para encerrar):\n");

    while (1) {
        scanf("%f", &nota);

        if (nota == -1.0)
            break;

        if (nota < 0.0 || nota > 10.0) {
            printf("Nota invalida! Digite uma nota entre 0.0 e 10.0.\n");
            continue;
        }

        if (totalAlunos == 0) {
            maiorNota = nota;
            menorNota = nota;
        } else {
            if (nota > maiorNota)
                maiorNota = nota;

            if (nota < menorNota)
                menorNota = nota;
        }

        soma += nota;
        totalAlunos++;
    }

    if (totalAlunos > 0) {
        media = soma / totalAlunos;

        printf("\nTotal de alunos avaliados: %d\n", totalAlunos);
        printf("Maior nota da turma: %.2f\n", maiorNota);
        printf("Menor nota da turma: %.2f\n", menorNota);
        printf("Media geral da turma: %.2f\n", media);
    } else {
        printf("\nNenhuma nota valida foi informada.\n");
    }

    return 0;
}