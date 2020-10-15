#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef char Vetor[10][40];
typedef float Vetor2[10];
typedef struct peca
{
	int codigo[30];
	Vetor nome;
	Vetor cor;
	Vetor2 peso;
	Vetor2 preco;
	int a;
}Peca;
void cadastro(Peca *p)
{
	int i;
	int b;
	b = p->a;
	setlocale(LC_ALL,"");
	for (i=0;i<b;i++)
	{
		printf ("\nDigite o código do produto: ");
		scanf ("%d",&p->codigo[i]);
		fflush(stdin);
		printf ("\nDigite o nome: ");
		gets(p->nome[i]);
		fflush(stdin);
		printf ("\nDigite o preço: ");
		scanf ("%f",&p->preco[i]);
		fflush(stdin);
		printf ("\nDigite o peso: ");
		scanf ("%f",&p->peso[i]);
		fflush(stdin);
	}
}
void imprime(Peca *p)
{		
	int i;
	int b;
	b = p->a;
	setlocale(LC_ALL,"");
	for (i=0;i<b;i++)
	{
		if (i!=0)
		{
		printf ("\n\n");
		}
		printf ("\nCódigo: %d",p->codigo[i]);
		printf ("\nNome: %s",p->nome[i]);
		printf ("\nPreço: %.2f",p->preco[i]);
		printf ("\nPeso: %.2f",p->peso[i]);
	}
}

void main() {
	setlocale(LC_ALL,"");
	Peca p;
	int i;
	printf ("\nDigite quantos itens deseja inserir: ");
	scanf ("%d", &p.a);
	fflush(stdin);
	cadastro(&p);
	system("cls");
	imprime(&p);
}
