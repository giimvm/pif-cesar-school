QUESTAO 01

a) while: a condição é avaliada antes da execução do bloco. Se a condição for falsa logo na primeira verificação, o bloco não será executado nenhuma vez.

do-while: a condição é avaliada após a execução do bloco. Portanto, o bloco será executado pelo menos uma vez, independentemente do valor inicial da condição.

b) for: É a melhor escolha quando o número de repetições é conhecido ou controlado por um contador.

while: É mais indicado quando não se sabe antecipadamente quantas vezes o laço será executado.

do-while: É recomendado quando o bloco precisa ser executado pelo menos uma vez antes da verificação da condição.

c) Não é um erro de compilação. Trata-se de um erro de lógica muito comum.O ponto e vírgula (;) sozinho representa uma instrução vazia.

Se a condição for verdadeira: O programa ficará repetindo indefinidamente a instrução vazia enquanto a condição continuar verdadeira.

QUESTAO 02

a) O compilador emitirá erro porque a variável soma foi declarada dentro do bloco do laço for. Quando o programa tenta utilizar soma na instrução printf após o término do laço, essa variável já não está mais visível para o compilador, gerando um erro de declaração de identificador.

b) Mesmo que o printf fosse colocado dentro do laço, o resultado continuaria incorreto. Isso acontece porque a variável soma é declarada e inicializada com o valor zero a cada nova iteração do for. Dessa forma, ela não acumula a soma dos quadrados calculados anteriormente, armazenando apenas o quadrado do valor atual de i. Assim, seriam exibidos os valores 1, 4, 9, 16 e assim por diante, em vez da soma acumulada dos quadrados.

c)

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;

    for (i = 1; i < 10; i++) {
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);

    system("PAUSE");
    return 0;
}

O conceito de *visibilidade* refere-se aos pontos do programa em que uma variável pode ser acessada.
O *escopo de bloco* determina que variáveis declaradas dentro de um bloco delimitado por chaves só podem ser utilizadas nesse mesmo bloco.
O *tempo de vida* de uma variável corresponde ao período em que ela existe na memória.

QUESTÃO 03

a) 36    18    9    4    2    1

b) No Trecho B, o programa fica lendo caracteres digitados pelo usuário através da função getch(). A cada iteração, o caractere lido é armazenado na variável ch e comparado com 'X'. Enquanto o caractere digitado for diferente de 'X', o laço continua executando. A expressão ch + 1 imprime o próximo caractere da tabela ASCII. Por exemplo, se o usuário digitar 'A', será exibido 'B'; se digitar '5', será exibido '6'.

c) Ele pode ser interrompido programaticamente por meio de uma instrução como break, executada quando uma determinada condição for satisfeita. Outra possibilidade seria utilizar uma instrução return para encerrar a função ou modificar a lógica do programa para que uma condição de parada seja verificada dentro do próprio laço.

QUESTAO 04

a) Quando o comando break é executado dentro de um laço for ou while, a repetição é encerrada imediatamente. O programa abandona o laço e continua a execução na primeira instrução localizada após o bloco do laço. Dessa forma, nenhuma outra iteração é realizada, mesmo que a condição de repetição ainda seja verdadeira.

b) Quando o comando continue é executado dentro de um laço for, o restante das instruções da iteração atual é ignorado e o controle é transferido diretamente para a etapa de incremento do laço. Após executar a terceira expressão do cabeçalho do for (a expressão de incremento/atualização), a condição é testada novamente para decidir se uma nova iteração será iniciada.

c) Em uma estrutura de laços aninhados, o comando break interrompe apenas o laço no qual ele está diretamente inserido. Portanto, se houver um for interno dentro de um for externo e um break for executado no laço interno, apenas esse laço interno será encerrado. O laço externo continuará sua execução normalmente.

QUESTAO 05

a) o laço executa 5 iterações antes de ser encerrado.

b) i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10

c) 
#include <stdio.h>

int main() {
    int i = 0;
    int j = 10;

    while (i < j) {
        printf("i = %d, j = %d | soma = %d\n", i, j, i + j);

        i++;
        j--;
    }

    return 0;
}

QUESTAO 06

a) Valor final de x = 6

b) 
| Valor usado na comparação | Comparação         | x após o incremento |
| ------------------------- | ------------------ | ------------------- |
| 0                         | 0 < 5 → verdadeiro | 1                   |
| 1                         | 1 < 5 → verdadeiro | 2                   |
| 2                         | 2 < 5 → verdadeiro | 3                   |
| 3                         | 3 < 5 → verdadeiro | 4                   |
| 4                         | 4 < 5 → verdadeiro | 5                   |
| 5                         | 5 < 5 → falso      | 6                   |

c)
int x = 0;

while (x < 5) {
    x++;
}

x++;

printf("Valor final de x = %d\n", x);