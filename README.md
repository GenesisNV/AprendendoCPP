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

    Através de uma linguagem de programação podemos escrever os passos do algoritmo para transformá-lo em um programa.
            
### Liguagem de programação
 
    A linguagem de programação é um método padronizado, formado por um conjunto de regras sintáticas e semânticas, de
    escrita de texto chamado de código fonte, que pode ser compilado e transformado em um programa de computador,ou
    usado como script interpretado, que informará instruções de processamento ao computador.
    
    O propósito da linguagem de programação é facilitar a comunicação entre humanos e máquida, visto que a máquina só
    entende a liguagem de máquina que é zero e um.
    
    Para que a máquina entenda o que foi programado, o código fonte precisa ser transformado. Para isso que existe o 
    compilador. O compilador converte as instruções incluídas no código fonte em zeros e um, e coloca em um arquivo 
    executável. Este executável é o que podemos chamar de programa.
    
    Existem diversas linguagens de programação, cada uma desenvolvida para diversos propósitos.
    
    Exemplos de liguagem de programação:
        Assembly, C, C++, C#, Pascal, Object Pascal, ADA, FORTRAN, BASIC, Visual Basic, Java, JavaScript, Python
    
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
        //Sua estrutura sequencial vai aqui.
        
        Instrução em C
        Instrução em C
        Instrução em C
        Instrução em C
    
        
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

    Uma variável é um espaço resevado na memória do computador que será utilizado pelo programa durante sua execução.
    Porque usar variáveis? Vamos pensar no algorítmo de somar três números cidado na seção de algoritmos:

        Passo 1: Receber os três números;
        Passo 2: Efetuar a soma dos três números recebidos;
        Passo 3: Informar o resuldado da soma.

    Para escrever este algoritmo na forma de uma estrutura sequencial utilizando a liguagem C, precisaremos conhcer 
    um novo comando para ler o que o usuário está escrevendo no teclado:
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
    
    Voltando para o algoritmo de somar três números, no passo 1, não é possível receber os três números de uma única vez.
    O comando scanf() foi desenvolvido para ler os dados do teclado e armazenar em apenas uma variável. Como precisamos
    receber três números, será necessário usar o comando para receber o primeiro número, depois usar o comando para receber
    o segundo número, e por fim, usar o comando novamente para receber o terceiro número.
    
    Para receber os números com o comando scanf() é necessário especificar as variáveis que armazenarão os números. Para
    isso é necessário declarar as variáveis.
    
    Declarar variáveis consiste em associar um espaço de mémoria disponível a um identificador.
    Para declarar variáveis basta seguir o formato a seguir:
    
        <tipo> <identificador> = <inicialização>;
        
        Onde:
            <tipo> - É o tipo do dado que será armazenado;
            <identificador> - É o identificador da vaiável. Um nome que faça sentido com o propósito da variável;
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
        

    O passo 2 diz para efetuar a soma dos três números recebidos para isso precisaremos de fazer o uso de operadores,
    para efetuar o cálculo e armazenar o resultado em algum lugar(será necessário declarar uma variável para tal).
[Inicio](#introdução-a-programação)
    
### Operadores

    Mas afinal o que são operadores?
    
    Operadores são sinais que efetuam operações entre dois operandos. Calma! Vai ficar claro com os exemplos.
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
    
    Exmplos:
    
    Operador    Exemplo     O que faz
    +           a + b       soma o conteúdo do operando a com o conteúdo do operando b;
    -           a - b       subtrai o conteúdo do operando b do conteúdo do operando a;
    *           a * b       multiplica o conteúdo do operando a pelo conteúdo do operando b;
    /           a / b       obtém o quociente da divisão do conteúdo do operando a pelo conteúdo do operando b;
    %           a % b       obtém o resto da divisão inteira do conteúdo do operando a pelo conteúdo do operando b;
    ++          a++         Aumenta o conteúdo do operando a em uma unidade. Também conhecido como icremento;
    --          a--         Diminui o conteúdo do operando a em uma unidade. Também conhecido com decremento;
        
    Existem muito mais operadores, mas por enquanto vamos utilizar só esses.
    
    Para o passo 2 do nosso algorítmo vamos utilizar o operador de soma para somar os três numeros e o operador de atribuição
    para armazenar o resultado numa variável previamente declarada.
    
    Por fim, vamos exibir o resultado na tela para o usuário no passo 3. Neste caso, será necessário o uso do printf().
    Para deixar o algorítmo mais amigável, é interessante informar para o usuário o que o programa está esperando. 
    Então o nosso algoritmo completo ficará assim:
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
