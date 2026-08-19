Questão 04:

- Ponto e vírgula após o #include <stdlib.h>
- O nome da função principal "main" inicia com letra maiúscula
- A sintaxe da função main está incorreta, sendo utilizado "{}" ao invés de "()"
- O corpo da função está delimitado por "(...)", ao invés de "{...}".
- Texto do printf não está entre aspas
- cout << endl; não pertence à linguagem C

Questão 05:

- Faltam as diretivas #include <stdio.h> e #include <stdlib.h>, necessárias para utilizar as funções printf() e system(), respectivamente.
- A função main deve possuir tipo de retorno int, sendo recomendável declarar int main(void) quando não recebe argumentos.
- É recomendável utilizar return 0; ao final da função.

Questão 06:

- Faltam as diretivas #include <stdio.h> e #include <stdlib.h>, necessárias para utilizar as funções printf() e system(), respectivamente.
- A função main deve possuir tipo de retorno int, sendo recomendável declarar int main(void) quando não recebe argumentos.
- A declaração de variáveis está incorreta. As variáveis b e c precisam ser declaradas com int, caso sejam declaradas separadamente.
- A linha 3 do código termina com ":" ao invés de ";"
- A string do printf() está com as aspas incorretamente posicionadas. O texto deve ser encerrado antes dos argumentos a, b e c.
- A variável d é utilizada no printf(), mas não foi declarada.
- O printf() possui três especificadores %d, portanto deve receber três valores correspondentes (a, b e c).
- É recomendável utilizar return 0; ao final da função.

Questão 07:

a. 
```

    Bom dia! Shirley.
```

b. 
```
Você já tomou café?

```


c.
```


A solução não existe!
Não insista.
```

d.
```
Duas linhas  de  saída
ou  uma?
```

e.
```
um
dois
três

```

Questão 08:

1. \n -> o cursor pula para a linha seguinte
2. \t -> depois de pular uma linha, o programa avança uma tabulação (TAB)
3. \" -> coloca aspas dentro da String
4. system("PAUSE") -> pausa a execução

Saída do printf:
```

    "Primeiro programa"
```

Questão 09:

Saída do primeiro printf:

O %c indica que o printf espera um caractere (char) para cada %c.
1. '\n' -> pula uma linha
2.'\t' -> insere uma tabulação
3.'\"' -> imprime aspas
```

   "Primeiro programa
```
Saída do segundo printf:
    
O %c espera um caractere, que deve ser escrito com aspas simples, mas o código passou uma String com aspas duplas. Não existe uma saída exata e portável garantida pelo padrão C para o programa, porque %c recebe um argumento do tipo errado.

Questão 10:

Alternativa b) -> A linguagem C é case sensitive, portanto diferencia letras maiúsculas de minúsculas. Assim, os identificadores peso, Peso e PESO são considerados diferentes e podem representar variáveis distintas na memória.
