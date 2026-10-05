QUESTÃO 01

c) Todos os pares de nomes ('valor'/'VALOR', 'peso'/'Peso', 'taxa'/'TAXA') representam identificadores totalmente distintos para o compilador.

QUESTÃO 02

1. Main() deveria ser main()
2. Falta de aspas na mensagem do printf()
3. não deve existir ponto e vírgula após #include <stdlib.h>

QUESTÃO 03

1. a += b + c;
    a = 2 + (4 + 5);
    a = 11;

2. b *= c = d - 2;
    c = d - 2;
    c = 10 - 2;
    c = 8;

    b *= c;
    b = b * c;
    b = 4 * 8;
    b = 32;

3. d %= a + 3;
    d = 10 % 14;
    d = 10;

4. a += b += c += 5;
    c += 5;
    c = 8 + 5;
    c = 13;

    b += 13;
    b = 32 + 13;
    b = 45;

    a += 45;
    a = 11 + 45;
    a = 56;

    VERSÃO FINAL:a = 56, b = 45, c = 13, d = 10

QUESTÃO 04

a) i < j + 2 
    2 < 3 + 2
    2 < 5

    Resultado: 1

b) 2 * i - 5 <= j - 4 
    2 * 2 - 5 <= 3 - 4
    4 - 5 <= -1
    -1 <= -1


    Resultado: 1

c) !k && (x + y >= 7.5) 
    !0 = 1
    2.5 + 5.0 >= 7.5
    7.5 >= 7.5 = 1
    1 && 1


    Resultado: 1

d) !(i == j) || (y / x == 2.0) 
    !(2 == 3)
    !(0)
    1
    1 || 1


    Resultado: 1

e) i == 2 && j == 4 || k == 0 
    && é avaliado antes de ||
    2 == 2 && 3 == 4
    1 && 0
    0
    0 == 0
    1
    0 || 1

    Resultado: 1

questão 05

a) while => Testa a condição antes de executar o bloco. Se a condição for falsa logo no início, o bloco pode *não executar nenhuma vez.*

do-while => Executa o bloco primeiro, só depois testa a condição. Portanto, *executa pelo menos uma vez.*

b) for é mais indicado quando sabemos antecipadamente:

    o valor inicial;
    a condição de parada;
    o incremento ou decremento.

c) É um comando válido para o compilador, mas geralmente representa um erro de lógica do programador. O ponto-e-vírgula (;) encerra o corpo do laço, criando um laço vazio.

Se a condição for verdadeira: gera um loop infinito, consumindo processamento e impedindo que o programa avance para as próximas instruções.

QUESTÃO 06

a) o erro ocorre porque soma foi declarada dentro do for e está sendo utilizada fora de seu escopo.

b) i = 1 até i = 4 => executam normalmente

    i = 5 => O  comando continue faz o laço pular o restante da iteração atual e ir diretamente para a próxima.

    i = 6 até i = 7 => executam normalmente

    i = 8 => O comando break encerra o laço imediatamente. Assim, o programa sai do for quando i vale 8.

    i = 9 e i = 10 => Nunca são executados, porque o break já encerrou o laço.

c) 
#include <stdio.h>
#include <stdlib.h>

int main() {

    int soma = 0;

    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;

        soma += i * i; 
        }

        printf("Soma final = %d\n", soma);
        system("PAUSE");

        return 0;
}

Soma final = 115