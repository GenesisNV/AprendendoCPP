#include <stdio.h>
#include <stdlib.h>    

int main()
{
    //Sua estrutura sequencial vai aqui.
int numero1 = 0;
int numero2 = 0;
int resultado = 0;

system ("CLS");

printf ("Digite o primeiro numero: ");
scanf ("%d", &numero1);
printf ("Digite o segundo numero: ");
scanf ("%d", &numero2);

if (numero2 != 0)
{
    resultado = numero1 / numero2;

    printf("Resultado da divisao %d / %d %c: %d\n", numero1, numero2, 130, resultado);
}
else
{
    printf("N%co %c poss%cvel dividir  o numero por zero!\n",132,130,161);
}


system ("PAUSE");
    
    //Comando que termina a aplicação e retorna o controle para o sistema operacional
    //O Zero informa para o sistema operacional que o programa foi conluído com sucesso.
    return 0;
} 