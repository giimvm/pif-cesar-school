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
    -O printf() possui três especificadores %d, portanto deve receber três valores correspondentes (a, b e c).
    - É recomendável utilizar return 0; ao final da função.

Questão 07:

    a. 
        Bom dia! Shirley.

    b. Você já tomou café?


    c.

    A solução não existe!
    Não insista.

    d. Duas linhas  de  saída
    ou  uma?

    e. um
    dois
    três

Questão 08:

    1. \n -> o cursor pula para a linha seguinte
    2. \t -> depois de pular uma linha, o programa avança uma tabulação (TAB)
    3. \" -> coloca aspas dentro da String
    4. system("PAUSE") -> pausa a execução

    Saída do printf:
        "Primeiro programa"

Questão 09:

    Saída do primeiro printf:

    O %c indica que o printf espera um caractere (char) para cada %c.
    1. '\n' -> pula uma linha
    2.'\t' -> insere uma tabulação
    3.'\"' -> imprime aspas

        "Primeiro programa

    Saída do segundo printf:
    
     O %c espera um caractere, que deve ser escrito com aspas simples, mas o código passou uma String com aspas duplas. Não existe uma saída exata e portável garantida pelo padrão C para o programa, porque %c recebe um argumento do tipo errado.

Questão 10:

    Alternativa b) -> A linguagem C é case sensitive, portanto diferencia letras maiúsculas de minúsculas. Assim, os identificadores peso, Peso e PESO são considerados diferentes e podem representar variáveis distintas na memória.

Questão 11:

    Constante  | Classificação                   | Tipo de Base em C
    \r         | sequência de escape             | char
    2130       | Inteira decimal                 | int
    -123       | inteira decimal                 | int
    33.28      | ponto flutuante                 | double
    0XFA       | inteira hexadecimal             | int
    0101       | inteira octal                   | int
    2.0e30     | ponto flutuante                 | double
    \xDC       | sequência de escape hexadecimal | char
    '\"'       | sequência de escape             | char
    '\\'       | sequência de escape             | char
    'F'        | caractere                       | char
    0          | inteira decimal                 | int
    '\0'       | sequência de escape             | char
    "F"        | constante string                | String
    -4567.89   | ponto flutuante                 | double


Questão 12:

    a. correto -> int é um tipo válido e a é o nome da variável.
    b. correto -> float é um tipo válido para números de ponto flutuante.
    c. incorreto -> double e float são especificadores de tipo de ponto flutuante que não podem    ser combinados dessa maneira.
    d. correto -> unsigned pode ser usado com tipos inteiros, incluindo char.
    e. correto -> o int é omitido, mas equivale a unsigned int e.
    f. incorreto -> long não pode ser usado com float.
    g. correto -> o int também é omitido nesse caso, equivale a long int g.
    h. correto -> long double é um tipo válido para números de ponto flutuante com maior precisão que float.

Questão 13:

    c) São arquivos de texto ASCII padrão contendo protótipos de funções, definições de constantes, macros e tipos.

Questão 14:

    a) Instruir o compilador a carregar as definições das funções da biblioteca padrão antes de compilar o código-fonte.

Questão 15:

    c) Uma diretiva especial para o pré-processador C, executada antes da compilação.

Questão 16:

    c) Pré-processador (fase do compilador que altera o programa-fonte antes da compilação propriamente dita).

Questão 17:

    Respostas corretas:
    a) printf ( "Primeiro programa" );
    b) printf( "Primeiro programa" );
    c) printf("Primeiro programa");

    Resposta incorreta:
    d) printf "Primeiro programa" ;

    Os espaços e quebras de linha geralmente são flexíveis. Por isso, apenas a alternativa D está errada, já que uma função precisa ter seus argumentos entre parênteses ().
