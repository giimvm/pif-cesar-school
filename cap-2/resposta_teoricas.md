Questão 01:

a) O valor armazenado é: 2
b) O compilador converte automaticamente o valor 2.97 para o tipo int. Durante essa conversão, a parte decimal (.97) é descartada, permanecendo apenas o valor inteiro. O nome desse fenômeno é truncamento.
c) O comportamento pode ser controlado:
- Utilizando float ou double para manter as casas decimais;
- Utilizando cast explícito ((int));
- Utilizando funções de arredondamento como round(), floor() ou ceil() antes da conversão

Questão 02:

a) <conio.h> deve ser evitada porque é uma biblioteca não padronizada e não portátil, ausente em muitos sistemas modernos.
b) Funções portáveis de <stdio.h>:

- Entrada: getchar(), fgetc(), scanf("%c", ...)
- Saída: putchar(), fputc(), printf()

c) Exemplo:

```
    char c;

    do {
        c = getchar();
    } while (c == '\n');

    printf("Caractere lido: %c\n", c); 
```

Questão 04:

1. a = 6
2. b = 12 / c = 6
3. d = 4
4. b = 6 / c = 0 / d = 4
5. a = 19 / b = 13 / c = 7

VALORES FINAIS -> a = 19 / b = 13 / c = 7 / d = 4

Questão 05:

a) true
b) false
c) false
d) false
e) true
f) true
g) true
h) true
i) false
j) false

Questão 06:

a) 
- ++n (prefixado): incrementa primeiro e depois utiliza o valor.
- n++ (pós-fixado): utiliza o valor atual e incrementa depois.

b) A instrução apresenta comportamento indefinido, pois a variável n é lida e modificada várias vezes na mesma expressão sem que a linguagem C defina a ordem de avaliação dos argumentos da função. Por isso, compiladores diferentes podem produzir resultados diferentes e imprevisíveis.

