//Inclusão das Dependências
#include<stdio.h>
#include<stdlib.h>
#include<string.h>



//Função Principal
int main()
{
    //O meu Programa vai aqui dentro
    int idade = 43;
    char name [60];
    float altura = 1.80;
    
    strcpy(name, "Kewlrygaen");
   
    
    printf("Minha idade eh %d.\n", idade );
    printf("Meu nome eh %s.\n", name );
    printf("Minha altura eh %1.2f.\n", altura );
    
    printf("Ola, meu nome eh %s e minha idade eh %d e minha altura eh %1.2f.\n", name,idade,altura);


    //--------------------------------SEGUNDA AULA: SOMA
    
     //Sua estrutura sequencial vai aqui.


    int numero1 = 0;
    int numero2 = 0;
    int resultado = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero; ");
    scanf("%d" ,&numero2);

    if(numero2 != 0)

 {
     resultado = numero1 / numero2;
     printf("Resultado da divisao %d / %d eh: %d\n", numero1,numero2,resultado);

 }

    else

 {
     printf("Nao eh possivel dividier o numero por zero!\n");
 }


    return 0;
}