//Inclusão das Dependências
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Função Principal
int main()
{
    //O meu Programa vai aqui dentro
    int idade;
    char name[20];
    float altura = 1.82;
    //quando aparecer numero nao desejável, coloque idade= um numero qualquer
    idade=42;
    idade=50;
    strcpy(name,"Genesis Vieira");
    //pra eu atribuir um texto numa variavel string usa-se a funcao strcpy

    printf("Minha idade eh %d.\n", idade);
    printf("%s.\n",name);
    
    
    printf("Ola, meu nome eh %s e minha idade e %d e minha altura eh %1.2f.\n",name,idade,altura);







    return 0;
}