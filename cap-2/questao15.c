#include <stdio.h>

int main () {
    float nota1, nota2, nota3, nota4;
    int peso_nota1_2 = 1;
    int peso_nota3_4 = 2;

    printf("Digite as quatro notas do aluno (coloque espaços entre elas): ");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    float media = (nota1 + nota2 + nota3 + nota4) / 4.0f;
    float media_ponderada = ((nota1 * peso_nota1_2 + nota2 * peso_nota1_2 )+ (nota3 * peso_nota3_4 + nota4 * peso_nota3_4)) / (peso_nota1_2 + peso_nota1_2 + peso_nota3_4 + peso_nota3_4);

    printf("Media aritmetica: %.2f\n", media);
    printf("Media ponderada: %.2f\n", media_ponderada);



    return 0;
}