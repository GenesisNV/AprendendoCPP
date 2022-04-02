# Introdução a Programação

## Sumário
- [Introdução a Programação](#introdução-a-programação)
  - [Sumário](#sumário)
  - [Ambiente de desenvolvimento](#ambiente-de-desenvolvimento)
  - [Inicio](#inicio)
  - [Algoritmos: O quê são, onde vivem, como se reproduzem.](#algoritmos-o-quê-são-onde-vivem-como-se-reproduzem)
      - [Exemplos:](#exemplos)
  - [Programação](#programação)
    - [Definição](#definição)
    - [Liguagem de programação](#liguagem-de-programação)
    - [Estrutura Sequencial](#estrutura-sequencial)
    - [Comando printf()](#comando-printf)
    - [Variáveis - O quê são, onde vivem, como se reproduzem.](#variáveis---o-quê-são-onde-vivem-como-se-reproduzem)
    - [Comando scanf()](#comando-scanf)
    - [Operadores](#operadores)
      - [Operador de atribuição](#operador-de-atribuição)
      - [Operadores matemáticos](#operadores-matemáticos)
    - [Estruturas Condicionais](#estruturas-condicionais)
      - [Operadores Relacionais](#operadores-relacionais)
      - [Estutura IF](#estutura-if)
      - [Estrutura SWITCH](#estrutura-switch)
    - [Estruturas de Repetições](#estruturas-de-repetições)
      - [Estrutura WHILE](#estrutura-while)
      - [Estrutura DO WHILE](#estrutura-do-while)
      - [Operadores Lógicos booleanos](#operadores-lógicos-booleanos)
      - [Estrutura FOR](#estrutura-for)
    - [Funções](#funções)
    - [Tipos de Dados Complexos](#tipos-de-dados-complexos)
    - [Alocação Dinânamica de Memória](#alocação-dinânamica-de-memória)
    - [Arquivos](#arquivos)

---

## Ambiente de desenvolvimento


* GIT: Sistema de controle de versão
  - Baixar no site oficial https://git-scm.com/
  - Instalar no computador
* GitHub: Serviço baseado em nuvem que hospeda repositórios GIT
  - Assessar em https://github.com/
  - É assessado pelo browser e não requer instalação
* MingW: Pacote de bibliotecas e compiladores utilizados para programar em C e C++
  - Baixar no site oficial https://osdn.net/projects/mingw/releases/
  - Instalar no computador
  - Incluir a pasta bin na variável de ambiente path
* Visual Studio Code: Editor de texto otimizado para construção e sumulação de aplicativos.
  - Baixar no site oficial https://code.visualstudio.com/
  - Instalar no computador
* Extensions do Visual Studio Code
  - C/C++
  - C/C++ Extension Pack
  - C/C++ Themes
  - C/C++ Compile Run
  - GitLens

[Inicio](#introdução-a-programação)
---

## Algoritmos: O quê são, onde vivem, como se reproduzem.

    Definição:
    Sequência finita de instruções bem definidas utilizada para solucionar um problema.

#### Exemplos:

```
Fazer um sanduiche
    Passo 1: Pegar o pão;
    Passo 2: Cortar o pão no meio;
    Passo 3: Pegar a maionese;
    Passo 4: Passar a maionese no pão;
    Passo 5: Pegar e cortar alfaçe e tomate;
    Passo 6: Colocar alface e  tomate no pão;
    Passo 7: Pegar o hamurger;
    Passo 8: Fritar o hamburger;
    Passo 9: Colocar o hamburger no pão.
Fim
    
Trocar uma lâmpada
    Passo 1: Pegar uma lâmpada nova;
    Passo 2: Pegar uma escada;
    Passo 3: Posicionar a escada em baixo da lâmpada queimada;
    Passo 4: Subir na escada com a lâmpada nova na mão;
    Passo 5: Retirar a lâmpada queimada;
    Passo 6: Colocar a lâmpada nova;
    Passo 7: Descer da escada;
    Passo 8: Testar interruptor;
    Passo 9: Guardar a escada;
    Passo 10: Jogar a lampada velha no lixo.
Fim
    
Calcular a soma de três números
    Passo 1: Receber os três números;
    Passo 2: Efetuar a soma dos três números recebidos;
    Passo 3: Informar o resuldado da soma.
Fim
```
[Inicio](#introdução-a-programação)

        
## Programação

### Definição

    É o ato de transformar o algoritmo em uma linguagem de programação.

    Através de uma linguagem de programação podemos escrever os passos do algoritmo para transformá-lo em um
    programa.
            
### Liguagem de programação
 
    A linguagem de programação é um método padronizado, formado por um conjunto de regras sintáticas e
    semânticas, de escrita de texto chamado de código fonte, que pode ser compilado e transformado em um
    programa de computador, ou usado como script interpretado, que informará instruções de processamento
    ao computador.
    
    O propósito da linguagem de programação é facilitar a comunicação entre humanos e máquida, visto que a
    máquina só entende a liguagem de máquina que é zero e um.
    
    Para que a máquina entenda o que foi programado, o código fonte precisa ser transformado. Para isso que
    existe o compilador. O compilador converte as instruções incluídas no código fonte em zeros e um, e
    coloca em um arquivo executável. Este executável é o que podemos chamar de programa.
    
    Existem diversas linguagens de programação, cada uma desenvolvida para diversos propósitos.
    
    Exemplos de liguagem de programação:
        Assembly, C, C++, C#, Pascal, Object Pascal, ADA, FORTRAN, BASIC, Visual Basic, Java, JavaScript,
        Python dentre outros.
    
    Exemplos de tecnologias que não pode ser confundidas com liguagem de programação:
        HTML, CSS, JQuery, Node.js, React.js, Agular, Vue.js, Bootstrap, Bulma

[Inicio](#introdução-a-programação)

### Estrutura Sequencial

    Esta é a primeira estrutura utilizada na programação.
    Consiste apenas em uma sequência de instruções, uma em baixo da outra.
    
    Exemplo de estrutura sequencial usando a liguagem C:
```C
    #include <stdio.h>
    #include <stdlib.h>    
    
    int main()
    {
        //As declarações das variáveis demem estar aqui.


        //Comando para limpar a tela antes de executar os comados seguintes.
        system("CLS");

        //Sua estrutura sequencial vai aqui.
        
        Instrução em C
        Instrução em C
        Instrução em C
        Instrução em C
    
        //Comando para solicitar ao usuário para precionar alguma tecla para terminar a aplicação.
        system("PAUSE");

        //Comando que termina a aplicação e retorna o controle para o sistema operacional
        //O Zero informa para o sistema operacional que o programa foi conluído com sucesso.
        return 0;
    } 
```
[Inicio](#introdução-a-programação)

### Comando printf()

    Este comando é utilizado para imprimir um texto na tela;
    
        Exemplo de uso do printf():
```c    
    printf("Olá, estou testando o uso do printf().");    
    printf("Vou usar bastante este comando.");    
    printf("Eu nunca vou escquecer ele.");    
```    
[Inicio](#introdução-a-programação)
    
### Variáveis - O quê são, onde vivem, como se reproduzem.

    Uma variável é um espaço resevado na memória do computador que será utilizado pelo programa durante sua
    execução. Porque usar variáveis? Vamos pensar no algorítmo de somar três números cidado na seção de
    algoritmos:

        Passo 1: Receber os três números;
        Passo 2: Efetuar a soma dos três números recebidos;
        Passo 3: Informar o resuldado da soma.

    Para escrever este algoritmo na forma de uma estrutura sequencial utilizando a liguagem C, precisaremos
    conhcer um novo comando para ler o que o usuário está escrevendo no teclado:

[Inicio](#introdução-a-programação)
        
### Comando scanf()

    Este comando é utilizado para ler o teclado do computador;
    
        Exemplo:
```C    
scanf("%d",&variavel1);
scanf("%f",&variavel2);
scanf("%s",&variavel3);
```        
    Onde:
    - Os parâmetros "%d", "%f" e "%s" - Especifica o tipo de dado que será lido do teclado;
    - Os parâmetros &variavel1, &variavel2 e &variavel3, determina onde o dado ficará armazenado
        (geralmente uma variável);
    
    Voltando para o algoritmo de somar três números, no passo 1, não é possível receber os três números de
    uma única vez. O comando scanf() foi desenvolvido para ler os dados do teclado e armazenar em apenas uma
    variável. Como precisamos receber três números, será necessário usar o comando para receber o primeiro
    número, depois usar o comando para receber o segundo número, e por fim, usar o comando novamente para
    receber o terceiro número.
    
    Para receber os números com o comando scanf() é necessário especificar as variáveis que armazenarão os
    números. Para isso é necessário declarar as variáveis.
    
    Declarar variáveis consiste em associar um espaço de mémoria disponível a um identificador.
    Para declarar variáveis basta seguir o formato a seguir:
    
        <tipo> <identificador> = <inicialização>;
        
        Onde:
            <tipo> - É o tipo do dado que será armazenado;
            <identificador> - Um nome usado para identificar e que faça sentido com o propósito da variável;
            <inicialização> - É necessário para não trazer memória suja para seu programa.
        
    Exemplos:
    
        int variavelInteira = 0;
        float variavelFlutuante = 0.00;
        char variavelCaractere = '';
        
    Então o passo 1 do nosso algoritmo se tornou um problema que também pode ser resolvido com algoritmo.
    
    Logo:
        Passo 1: Receber os três números;
    Pode ser substituido por:
        Passo 1 parte 1: Declarar a variável do primeiro número;
        Passo 1 parte 2: Declarar a variável do segundo número;
        Passo 1 parte 3: Declarar a variável do terceiro número;
        Passo 1 parte 4: Ler o teclado e armazenar o número digitado na variavel do primeiro número;
        Passo 1 parte 5: Ler o teclado e armazenar o número digitado na variavel do segundo número;
        Passo 1 parte 6: Ler o teclado e armazenar o número digitado na variavel do terceiro número;
            
    Pronto. Com este algoritmo resolvemos o passo 1 do algoritmo para calcular a soma de três números.
        

    O passo 2 diz para efetuar a soma dos três números recebidos para isso precisaremos de fazer o uso de
    operadores, para efetuar o cálculo e armazenar o resultado em algum lugar(será necessário declarar uma
    variável para tal).

[Inicio](#introdução-a-programação)
    
### Operadores

    Mas afinal o que são operadores?
    
    Operadores são sinais que efetuam operações entre dois operandos. Calma! Vai ficar claro com exemplos.
    Existem vários tipos de operadores. Vamos consecê-los:
    
####  Operador de atribuição

    Utilizado para atribuir o conteúdo de um operando a outro operando.
    
    Exemplo:
        a = b;
        
    a e b são operandos.
    = é o operador de atribuição.
    Neste exemplo eu estou atribuindo o conteúdo do operando b no operando a.
    Se em antes desta sentença o conteúdo de a for 3 e o conteúdo de b for 5, após a execução desta sentença
    o conteúdo de a será 5. Exatamente igual ao conteúdo de b.
[Inicio](#introdução-a-programação)
        
#### Operadores matemáticos
    
    Utilizados para fazer operações matemáticas entre operando.
    
    Vamos conhecê-los:
    
| Operador | Exemplo | O que faz |
| :---: | :---: | --- |
| + | a + b | Soma o conteúdo do operando a com o conteúdo do operando b. |
| - | a - b | Sbtrai o conteúdo do operando b do conteúdo do operando a. |
| * | a * b | Multiplica o conteúdo do operando a pelo conteúdo do operando b. |
| / | a / b | Obtém o quociente da divisão do conteúdo do operando a pelo conteúdo do operando b. |
| % | a % b | Obtém o resto da divisão inteira do conteúdo do operando a pelo conteúdo do operando b. |
| ++ | a++ | Aumenta o conteúdo do operando a em uma unidade. Também conhecido como icremento. |
| -- | a-- | Diminui o conteúdo do operando a em uma unidade. Também conhecido com decremento. |
        
    Existem muito mais operadores, mas por enquanto vamos utilizar só esses.
    
    Para o passo 2 do nosso algorítmo vamos utilizar o operador de soma para somar os três numeros e o 
    operador de atribuição para armazenar o resultado numa variável previamente declarada.
    
    Por fim, vamos exibir o resultado na tela para o usuário no passo 3. Neste caso, será necessário o uso
    do printf(). Para deixar o algorítmo mais amigável, é interessante informar para o usuário o que o
    programa está esperando. Então o nosso algoritmo completo ficará assim:
```    
ALGORITMO - Calcular a soma de três números:
    Passo 01 - Declarar variável do tipo inteiro com o nome de numero1;
    Passo 02 - Declarar variável do tipo inteiro com o nome de numero2;
    Passo 03 - Declarar variável do tipo inteiro com o nome de numero3;
    Passo 04 - Declarar variável do tipo inteiro com o nome de resultado;
    Passo 05 - Mostrar na tela o texto: "Digite o primeiro número:"
    Passo 06 - ler o teclado e armazendar o número digitado na variável numero1;
    Passo 07 - Mostrar na tela o texto: "Digite o segundo número:"
    Passo 08 - ler o teclado e armazendar o número digitado na variável numero2;
    Passo 09 - Mostrar na tela o texto: "Digite o terceiro número:"
    Passo 10 - ler o teclado e armazendar o número digitado na variável numero3;
    Passo 11 - Utilizar o operador de soma para somar as variáveis numero1, numero2 e numero3,
                e armazenar o resultado na variável resultado;
    Passo 12 - Mostrar o conteúdo da variável resultado na tela;
FIM 
```
    Transformando o algoritmo em um código fonte escrito em liguagem C, fica assim:

```C    
#include <stdio.h>
#include <stdlib.h>    

int main()
{
    //Sua estrutura sequencial vai aqui.
    
    int numero1;
    int numero2;
    int numero3;
    int resultado;
    
    printf("Digite o primeiro numero:\n");
    scanf("%d", &numero1);
    printf("Digite o segundo numero:\n");
    scanf("%d", &numero2);
    printf("Digite o terceiro numero:\n");
    scanf("%d", &numero3);
    
    resultado = numero1 + numero2 + numero3;
    
    printf("O resultado da soma eh: %d\n", resultado);

    //Comando que termina a aplicação e retorna o controle para o sistema operacional
    //O Zero informa para o sistema operacional que o programa foi conluído com sucesso.
    return 0;
}        
```
[Inicio](#introdução-a-programação)

### Estruturas Condicionais

    São utilizadas para tomada de decisões. Através desta estrutura o programa avalia uma condição. Esta
    condição sempre será verdadeira ou falsa. Mas como se analisa condições? Através de operadores
    relacionais.

#### Operadores Relacionais

    São operadores que comparam um operando com outro operando.

    Vamos conhecê-los:

| Operador | Exemplo | O que faz |
| :---: | :---: | --- |
| == | a == b | Verifica se o conteúdo de a é igual ao conteúdo de b. |
| > | a > b | Verifica se o conteúdo de a é maior que o conteúdo de b. |
| >= | a >= b | Verifica se o conteúdo de é maior ou igual ao conteúdo de b. |
| < | a < b | Verifica se o conteúdo de a é menor que o conteúdo de b. |
| <= | a <= b | Verifica se o conteúdo de a é menor ou igual ao conteúdo de b. |
| != | a != b | Verifica se o conteúdo de a é diferente do conteúdo de b. |

    O resultado a operação sempre será FALSO ou VERDADEIRO. Este tipo de dado é camado de dado do tipo
    booleano. Dados booleanos são dados que possuem apenas dois estados. Ou ele vai ser falso, ou vai ser
    verdadeiro. A maioria das linguagens de programação possui um tipo de dado específico para representar
    dados booleanos. Contudo, a linguagem C não possui este tipo de dado. Para representar dados booleanos
    na liguagem C, vamos utilizar o tipo int.

    Por convenção, operações que retornam dados booleanos, sempre retornará zero ou um.
    Onde:

    Zero - será o valor booleano FALSO;
    Um - Será o valor booleano FERDADEIRO.

    Exemplo:

```C

// A variável valorBooleano1 declarada abaixo é do tipo int e está sendo inicializada com o número 1.
// Portanto esta variável pode ser tratada como variável do tipo booleana cujo seu valor é VERDADEIRO.
int valorBooleano1 = 1;  

// A variável valorBooleano2 declarada abaixo também é do tipo int e está sendo inicializada com o número 0.
// Esta variável também pode ser tratada como variável do tipo booleana, mas com valor é FALSO.
int valorBooleano2 = 0;  

// Podemos fazer operações booleanas com operadores relacionais e armazenar o resultado em uma variável:
//Vamos declarar uma série de variáveis.
int a = 2;
int b = 3

char c = 'M';
char d = 'O';
char e = 'm';

int res;

//Vamos fazer algumas operaçõs booleandas e armazenar o resultado na variável res:

res = a > b;        //O resultado será 0. Portanto FALSO.
res = a < b;        //O resultado será 1. Portanto VERDADEIRO.
res = a == b;       //O resultado será 0. Portanto FALSO.
res = a != b;       //O resultado será 1. Portanto VERDADEIRO.


res = c == d        //O resultado será 0. Portanto FALSO.
res = d == 'O';     //O resultado será 1. Portanto VERDADEIRO.
res = c == e;       //O resultado será 0. Portanto FALSO.

```

#### Estutura IF

    Operações booleanas são necessárias para tomada de decisão. A estrutura IF testa se o resultado de uma
    operação booleana é verdadeira ou falsa. Se a operação for verdadeira, ela executa um bloco de código.
    Caso contrário, ela não executa o bloco de código, ou executa um bloco alternativo. Existem três fomras
    de construir esta estrutura. Vamos conhecê-las:

```C

//Preparação
char resposta;
float nota;

printf("Quer comprar p%co caseiro(S/N)? ", 132);
scanf("%c", &resposta);

// Primeira forma do IF
if(resposta == 's')
{
    // Se o usuário digitar s, este bloco será executado e esta mensagem aparecerá para o usuário.
    printf("Aqui est%c o seu p%co, obrigado!\n",160, 132);
}

printf("Gostou da comida(S/N)? ");
scanf("%c", &resposta);


// Segunda forma do IF
if(resposta == 's')
{
    // Se o usuário digitar s, este bloco será executado e esta mensagem aparecerá para o usuário.
    printf("Que bom! Fique a vontade para pegar mais.\n");
} 
else
{
    // Se o usuário digitar qualquer coisa diferente de s, este bloco será executado e esta mensagem
    //aparecerá para o usuário.
    printf("Que pena! Vou melhorar da pr%cxima vez.\n", 162);

}

printf("Digite a nota final do aluno: ");
scanf("%f", &nota);

// Terceira forma do IF
if(nota >= 8.00)
{
    // Se o usuário digitar um número maior ou igual a 8, este bloco será executado.
    printf("O Conceito deste aluno %c A. APROVADO!\n", 130);
}
else if (nota >= 6)
{
    // Se a condição anterior for falsa, este bloco será executado.
    printf("O Conceito deste aluno %c B. APROVADO!\n", 130);
}
else if (nota >= 4)
{
    // Se a condição anterior for falsa, este bloco será executado.
    printf("O Conceito deste aluno %c C. RECUPERA%c%cO!\n", 130, 128, 142);
}
else if (nota >= 2)
{
    // Se a condição anterior for falsa, este bloco será executado.
    printf("O Conceito deste aluno %c D. REPROVADO!\n", 130);
}
else
{
    // Se todas as condições anteriores forem falsas, este bloco será executado.
    printf("O Conceito deste aluno %c F. REPROVADO!\n", 130);
}


```

#### Estrutura SWITCH

    Existem situações em que precisamos analisar o resultado de uma única sentença e agir de forma diferente
    dependendo do seu valor. É o caso de um menu. Um menu é uma lista com várias opções. Dependendo da opção
    escolhida, uma ação será executada. Podemos fazer este menu usando a estrutura IF.

```C

int opcao;

printf("Escolha uma op%c%co:\n", 135, 132);

printf("1 - Cadastros:\n");
printf("2 - Pedidos:\n");
printf("3 - Vendas:\n");
printf("4 - Financeiro:\n");
printf("5 - Relat%crios\n", 162);
printf("6 - Ajuda\n");
printf("7 - Sair\n");

scanf("%d", &opcao);

if(opcao == 1)
{
    prinf("Você escolheu Cadastro!\n");
}
else if(opcao == 2)
{
    printf("Você escolheu Pedidos:\n");
}
else if(opcao == 3)
{
    printf("Você escolheu Vendas:\n");
}
else if(opcao == 4)
{
    printf("Você escolheu Financeiro:\n");
}
else if(opcao == 5)
{
    printf("Você escolheu Relat%crios\n", 162);
}
else if(opcao == 6)
{
    printf("Você escolheu Ajuda\n");
}
else
{
    printf("Você escolheu Sair\n");
}

```

    Agora Imagine um menú com 20 opções. Você teria que escrever um if para cada opção do menu. Além disso
    Durante a execução do programa, o computador iria analizar cada codição dependendo do que o usuário
    optou. Isso pode se tornar um problema de leitura do código e de processamento. Existe uma forma de simplificar este código, o tornando mais elegante e performático. Para isso usaremao a estrutura SWITCH.
    O SWITCH testa a variável em questão uma única vez e executa o bloco correspondente. Isto deixa o código
    mais limpo e fácil de entender. 

    Vejamos como seria o menu com o SWITCH:

```C

int opcao;

printf("Escolha uma op%c%co:\n", 135, 132);

printf("1 - Cadastros:\n");
printf("2 - Pedidos:\n");
printf("3 - Vendas:\n");
printf("4 - Financeiro:\n");
printf("5 - Relat%crios\n", 162);
printf("6 - Ajuda\n");
printf("7 - Sair\n");

scanf("%d", &opcao);

// O SWITCH vai testar a variável opcao uma única vez. Caso ela seja um dos valores que estão na frente da
// cláusula CASE, o bloco correspondente será executado. Se o usuário digitar algum valor que não foi
// definido, a cláusula DEFAULT é executada.
switch(opcao)
{
    case 1:
        prinf("Você escolheu Cadastro!\n");
        break;
    case 2:
        printf("Você escolheu Pedidos:\n");
        break;
    case 3:
        printf("Você escolheu Vendas:\n");
        break;
    case 4:
        printf("Você escolheu Financeiro:\n");
        break;
    case 5:
        printf("Você escolheu Relat%crios\n", 162);
        break;
    case 6:
        printf("Você escolheu Ajuda\n");
        break;
    case 7:
        printf("Você escolheu Sair\n");
        break;
    default:
        printf("Escolha uma op%c%co v%clida!\n", 135, 132, 160);
        break;
}

return 0;

```

### Estruturas de Repetições

    No exemplo anterior construímos um menu. Se o usuário digitar qualquer coisa diferente de 1,2,3,4,5,6,7,
    a cláusula DEFAULT será executada e a mensagem "Escolha uma opção válida" será exibida. O problema é
    que depois que esta mensagem é exibida, o programa termina. Seria interessante exibir o menu para o
    usuário novamente, para ele digitar uma opção válida.

#### Estrutura WHILE

    Podemos resolver este tipo de problema com a estrutura de repetição WHILE. Este tipo de estrutura testa
    uma condição. Enquanto esta condição for verdadeira, ela executa um bloco de código.

    Então, para o nosso menu, enquando o usuário não digitar uma opção válida, o menu será exeibido na tela.

    O código vai ficar assim:

```C

int opcao;

system("CLS");

printf("Escolha uma op%c%co:\n", 135, 132);

printf("1 - Cadastros:\n");
printf("2 - Pedidos:\n");
printf("3 - Vendas:\n");
printf("4 - Financeiro:\n");
printf("5 - Relat%crios\n", 162);
printf("6 - Ajuda\n");
printf("7 - Sair\n");

scanf("%d", &opcao);

switch(opcao)
{
    case 1:
        prinf("Você escolheu Cadastro!\n");
        break;
    case 2:
        printf("Você escolheu Pedidos:\n");
        break;
    case 3:
        printf("Você escolheu Vendas:\n");
        break;
    case 4:
        printf("Você escolheu Financeiro:\n");
        break;
    case 5:
        printf("Você escolheu Relat%crios\n", 162);
        break;
    case 6:
        printf("Você escolheu Ajuda\n");
        break;
    case 7:
        printf("Você escolheu Sair\n");
        break;
    default:
        printf("Escolha uma op%c%co v%clida!\n", 135, 132, 160);
        break;
}

// O WHILE vai teste o valor da variável opcao. Se ela for maior que 7, significa que o usuário informou um
// valor inválido. Então ele executa o que está no seu bloco. Quando ele executa o último comando do seu
// bloco, ele testa novamente a variável opcao. Se o usario digitou um valor maior que 7, o bloco será 
// executado novamente. O programa vai ficar neste loop enquanto a variável opcao for maior que 7.

while(opcao > 7)
{
    system("CLS");

    printf("Escolha uma op%c%co:\n", 135, 132);

    printf("1 - Cadastros:\n");
    printf("2 - Pedidos:\n");
    printf("3 - Vendas:\n");
    printf("4 - Financeiro:\n");
    printf("5 - Relat%crios\n", 162);
    printf("6 - Ajuda\n");
    printf("7 - Sair\n");

    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
            prinf("Você escolheu Cadastro!\n");
            break;
        case 2:
            printf("Você escolheu Pedidos:\n");
            break;
        case 3:
            printf("Você escolheu Vendas:\n");
            break;
        case 4:
            printf("Você escolheu Financeiro:\n");
            break;
        case 5:
            printf("Você escolheu Relat%crios\n", 162);
            break;
        case 6:
            printf("Você escolheu Ajuda\n");
            break;
        case 7:
            printf("Você escolheu Sair\n");
            break;
        default:
            printf("Escolha uma op%c%co v%clida!\n", 135, 132, 160);
            break;
    }

}

return 0;

```

    Tem um problema com o código acima. Existe código duplicado no programa. O menu e a estrutura SWITCH.
    A princípio isso não implica na performance, mas para leitura do código fica enfadonho. Podemos resolver
    isso com outra estrutura.

#### Estrutura DO WHILE

    A as estruturas WHILE e DO WHILE fazem a mesma coisa. Elas elas executam um bloco de código enquanto uma
    condição for verdadeira. O grande diferencial entre elas é que a WHILE, primeiro testa a condição e, se
    a condição for verdadeira, executa o bloco de codigo, enquanto esta condição for verdadeira. Já a DO
    WHILE, executa o bloco de código, testa uma condição, e executa o bloco de codigo enquanto a condição
    for verdadeira.

    Resumindo, a While nem chega executar seu bloco de codigos se a condição for falsa. Já a DO WHILE
    executa seu bloco de código pelo meno uma vez.

    Vamos ver isso:

```C

int opcao;


// O bloco será executado pelo menos uma vez.
do
{
    system("CLS");

    printf("Escolha uma op%c%co:\n", 135, 132);

    printf("1 - Cadastros:\n");
    printf("2 - Pedidos:\n");
    printf("3 - Vendas:\n");
    printf("4 - Financeiro:\n");
    printf("5 - Relat%crios\n", 162);
    printf("6 - Ajuda\n");
    printf("7 - Sair\n");

    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
            prinf("Você escolheu Cadastro!\n");
            break;
        case 2:
            printf("Você escolheu Pedidos:\n");
            break;
        case 3:
            printf("Você escolheu Vendas:\n");
            break;
        case 4:
            printf("Você escolheu Financeiro:\n");
            break;
        case 5:
            printf("Você escolheu Relat%crios\n", 162);
            break;
        case 6:
            printf("Você escolheu Ajuda\n");
            break;
        case 7:
            printf("Você escolheu Sair\n");
            break;
        default:
            printf("Escolha uma op%c%co v%clida!\n", 135, 132, 160);
            break;
    }

// Só depois de executar o bloco é que o teste é feito. Se o teste for verdadeiro, o bloco é executado
// novamente. Se o teste for falso, o loop é encerrado.
}while(opcao > 7);

return 0;

```
    Há outro problema com o menu. Se o usuário digitar 0, será um valor inválido mas não há nenhuma
    tratativa para esta opção. O usuário também poderá digitar valores negativos. Podemos tratar este tipo de situação fazendo com que o a execução do bloco repita apenas quando a variável
    opção for diferente menor que 1 e maior que 7. Assim, quando o usuário digitar zero ou um
    número negativo, o bloco de código será repetido.

#### Operadores Lógicos booleanos

    Para combinar duas ou mais condições precisaremos fazer uso de operadores lógicos. Ele são utilizados quando é necessário usar duas ou mais condições dentro da mesma sentença.

    Vamos conhecê-los:

| Operador | Exemplo | O que faz |
| :---: | :---: | --- |
| && | a && b | AND ou E. Também conhecido como multiplicação booleana. |
| \|\| | a \|\| b | OR ou OU. Também conhecido como soma booleana.|
| ^ | a ^ b | XOR ou XOU. Este operador difícilmente é usado. |
| ! | !a | NOT ou NÃO. Também conhecido como negação.|

    Para entender como esses oeradores funcionam, vamos partir do pricípio que A e B são variáveis
    booleanas. A seguir amos ver a tabela verdade de cada um desses operadores.


Operador &&

| A | B | A && B |
| :---: | :---: | :---: |
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

Operador ||

| A | B | A \|\| B |
| :---: | :---: | :---: |
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 1 |

Operador ^

| A | B | A \|\| B |
| :---: | :---: | :---: |
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 0 |

Operador !

| A | A ! B |
| :---: | :---: |
| 0 | 1 |
| 1 | 0 |

    Voltando ao problema do menu, precisamos o menu seja exibido equanto o usuário digitar um 
    número inválido. Em outras palavras, equando opcao for menor que ou opcao for maior que 7.
    Escrevendo isso em C ficaria assim:

```C
(opcao < 1); // opcao menor que 1.
(opcao > 7); // opcao maior que 7.

//Juntado as duas condições com o operador ||

((opcao < 1) || (opcao > 7)); //opcao menor que 1 OU opcao maior que 7

```

    Vamos substituir esta condição combinada no nosso menu. Note que para ficar organizado o uso
    do parentese se faz necessário. O código vai ficar assim:

```C

int opcao;


// O bloco será executado pelo menos uma vez.
do
{
    system("CLS");

    printf("Escolha uma op%c%co:\n", 135, 132);

    printf("1 - Cadastros:\n");
    printf("2 - Pedidos:\n");
    printf("3 - Vendas:\n");
    printf("4 - Financeiro:\n");
    printf("5 - Relat%crios\n", 162);
    printf("6 - Ajuda\n");
    printf("7 - Sair\n");

    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
            prinf("Você escolheu Cadastro!\n");
            break;
        case 2:
            printf("Você escolheu Pedidos:\n");
            break;
        case 3:
            printf("Você escolheu Vendas:\n");
            break;
        case 4:
            printf("Você escolheu Financeiro:\n");
            break;
        case 5:
            printf("Você escolheu Relat%crios\n", 162);
            break;
        case 6:
            printf("Você escolheu Ajuda\n");
            break;
        case 7:
            printf("Você escolheu Sair\n");
            break;
        default:
            printf("Escolha uma op%c%co v%clida!\n", 135, 132, 160);
            break;
    }

// Só depois de executar o bloco é que o teste é feito. Se o teste for verdadeiro, o bloco é executado
// novamente. Se o teste for falso, o loop é encerrado.
}while((opcao < 1) || (opcao > 7));

return 0;

```

#### Estrutura FOR

    Agorra digamos que você queira que um bloco de código seja executado um número definido de vezes.
    Por exemplo, que quero que o computador mostre na tela a frase "Glóriais... a Deuxxx!" dez vezes.
    Podemos escrever o comando printf dez vezes. Mas isso não é prático. Se eu quisesse imprimir 1000 vezes
    como seria isso?

    Neste caso será necessário o uso da estrutura FOR:

```C

int i;  //Esta variável é será usada como variável de controle FOR.

for(i = 0; i < 100; i++)
{
    printf("Gl%criais... a Deuxxx!", 162);
}

```

    O for sempre tará esta a seguinte estrutura:
    for ( expressão_inicial ; condição ; controle ) statement

### Funções

### Tipos de Dados Complexos

### Alocação Dinânamica de Memória

### Arquivos
