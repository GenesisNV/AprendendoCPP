
//inclusao das dependencias

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//funçao principal

int main()
{
int idade = 100;
char name [40];
float altura = 1.80;
double comprimento =3000;

strcpy (name, "kewlrygaen");

printf("minha idade eh %d.\n", idade);
printf("meu nome eh %s.\n",name);
printf("minha altura eh %1.2f.\n", altura);


printf("Ola, meu nome eh %s  e minha idade eh %d e minha altura eh %1.2f.\n", name, idade,altura);




    return 0;
}



