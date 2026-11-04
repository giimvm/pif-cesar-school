QUESTÃO 01:

a) if (x=0) -> é utilizado para realizar atribuição de valor à variável. Como o resultado da atribuição é 0, a condição é avaliada como falsa, fazendo com que o bloco associado ao comando if não seja executado. Consequentemente, caso exista um bloco else, este será executado.

if (x==0) -> é utilizado para realizar uma comparação de igualdade, sem modificar o conteúdo da variável. O bloco if é executado somente se a se a condição for verdadeira

QUESTÃO 02:

a) A saída produzida será: Opção B\n

A mensagem "Opção A" não será exibida porque a condição y > 10 é falsa. Já a mensagem "Opção B" será exibida em razão da associação do else ao segundo if.

b) dangling else: quando existem estruturas condicionais aninhadas sem o uso de chaves ({}), o compilador associa cada cláusula else ao comando if mais próximo que ainda não possua um else correspondente.

c) 
int x = 15, y = 5;

if (x > 10)
{
    if (y > 10)
    {
        printf("Opção A\n");
    }
    else
    {
        printf("Opção B\n");
    }
}

QUESTÃO 03:

a) a condição media >= 7.0 é avaliada inicialmente. Se o resultado for verdadeiro, a variável situacao receberá o caractere 'A'. Caso contrário, receberá o caractere 'R'.

Considerando que media = 6.8, a condição 6.8 >= 7.0 é falsa. Portanto, a variável situacao armazenará o valor 'R', indicando que o aluno foi reprovado.

b)
media = (nota1 + nota2) / 2.0;

if (media >= 7.0)
{
    situacao = 'A';
}
else
{
    situacao = 'R';
}

c) Sua principal limitação é que o operador ternário trabalha com expressões, enquanto o comando if-else pode conter blocos completos de instruções. Dessa forma, quando é necessário executar múltiplos comandos, realizar laços, declarar variáveis ou implementar lógicas mais complexas, o uso de if-else torna-se mais apropriado.

QUESTÃO 04:

a) A saída produzida será:

Prata
Ouro

Isso ocorre porque não existe a instrução break após o case 2. Dessa forma, após executar o comando associado ao case 2, o programa continua executando os casos subsequentes até encontrar um break ou até o final do bloco switch.

b) A instrução break tem a função de interromper a execução do bloco switch, transferindo o controle do programa para a primeira instrução localizada após o fechamento do switch. Quando o break é omitido, ocorre o fenômeno denominado fall-through. Nesse comportamento, após encontrar o caso correspondente, o programa continua executando todos os casos seguintes, independentemente de seus rótulos, até encontrar um break ou o término do switch.

c) O comando switch aceita apenas expressões cujo resultado seja de um tipo inteiro. Entre os tipos normalmente aceitos estão: int, char, short, long, enum (tipos enumerados).

Não é permitido utilizar variáveis dos tipos float ou double diretamente em um switch porque o switch realiza comparações exatas entre valores constantes e rótulos case, e números de ponto flutuante podem apresentar imprecisões de representação na memória.

QUESTÃO 05:

a) A saída produzida será: a = 0, b = 5, c = 2
Como o operador lógico E (&&) utiliza o mecanismo de curto-circuito, quando a primeira condição é falsa, a segunda condição não precisa ser avaliada. Por isso o incremento ++b é ignorado.

b) Operador E (&&): se a primeira condição for falsa, as demais não precisam ser avaliadas.

Operador OU (||): se a primeira condição for verdadeira, as demais não precisam ser avaliadas.

c) Como a condição a==0 é verdadeira, devido ao curto-circuito do operador ||, a segunda condição não será avaliada.

QUESTÃO 06:

a) A saída produzida será: 

Idoso
Adulto
Jovem

Múltiplas mensagens são exibidas porque foram utilizados três comandos if independentes. Como cada condição é avaliada separadamente, todas as condições verdadeiras têm seus respectivos blocos executados.

b) Em uma sequência de comandos if independentes, todas as condições são avaliadas individualmente. Portanto, mais de uma condição pode ser verdadeira e vários blocos podem ser executados.
Já em uma cadeia else-if, as condições são avaliadas sequencialmente até que uma delas seja verdadeira. Após encontrar uma condição verdadeira, as demais não são executadas.

c) 
int idade = 25;

if (idade >= 60)
{
    printf("Idoso\n");
}
else if (idade >= 18)
{
    printf("Adulto\n");
}
else if (idade >= 12)
{
    printf("Jovem\n");
}
else
{
    printf("Criança\n");
}