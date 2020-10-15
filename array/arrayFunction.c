/*
5)	Construa um algoritmo que contenha uma lista dinâmica homogênea para guardar 
números digitados pelo usuário, solicite ao usuário a quantidade de número e os 
números e depois os imprima em tela.
R.:
*/
#include <stdio.h>

typedef struct lista{
	int num;
	struct lista *prox;
}LISTA;

LISTA* insercao(LISTA* inicio, int num);

void impressao(LISTA *inicio);

int main (void){
	int quantidade, numero;
	LISTA *l = NULL;
	
	printf("Digite a quantidade: ");
	scanf("%i",&quantidade);
	fflush(stdin);
	
	while (quantidade >= 1){
		printf("Digite um numero:");
		scanf("%i",&numero);
		fflush(stdin);
		l=insercao(l, numero);
		quantidade--;
	}
	
	impressao(l);
	return 0;
}

LISTA* insercao(LISTA *inicio, int num){
	LISTA *l = (LISTA*) malloc(sizeof(LISTA));
	l->num=num;
	
	if(inicio == NULL){
		inicio=l;
		l->prox=NULL;
	}else{
		l->prox=inicio;
		inicio=l;
	}
	return inicio;
}

void impressao(LISTA *inicio){
	LISTA *aux;
	aux=inicio;
	while(aux!=NULL){
		printf("%i, ",aux->num);
		aux=aux->prox;
	}
}
