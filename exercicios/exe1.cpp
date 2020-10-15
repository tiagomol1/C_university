#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 4. Construa um programa que define uma estrutura do tipo pessoa, no mesmo programa também construa duas funções, 
uma que solicite a inserção de dados da estrutura de pessoa e outra que imprima a estrutura inserida. */
typedef struct pessoa{
	char nome[40];
	char sobrenome[40];
	float altura;
	float peso;	
}Pessoa;

void cadastro(Pessoa *pe)
{
	setlocale(LC_ALL,"");
	printf ("Digite seu nome: \n");
	scanf ("%s", pe->nome);	
	fflush(stdin);		
	printf ("Digite seu sobrenome: \n");
	scanf ("%s", pe->sobrenome);	
	fflush(stdin);
	printf ("Digite sua altura: \n");
	scanf ("%f", &pe->altura);
	fflush(stdin);
	printf ("Digite sua peso: \n");
	scanf ("%f", &pe->peso);
	fflush(stdin);
}
void imprime(Pessoa *pe)
{
	setlocale(LC_ALL,"");
	printf ("----------------\n");
	printf ("Nome: %s %s\nAltura: %.2f\nPeso: %.2f",pe->nome,pe->sobrenome,pe->altura,pe->peso);	
}
int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	Pessoa pe;
	cadastro(&pe);
	imprime(&pe);
	return 0;
}
