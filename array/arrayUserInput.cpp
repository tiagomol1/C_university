#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	int num;
	struct lista *prox;
}LISTA;

int quantidade(int qtd){
	printf("Informe a quantidade de valores que serao armazenados: ");
    scanf("%d", &qtd); //recebe um inteiro e armazena na variável a
    return qtd;
}

int main (void){
	LISTA *inicio = NULL;
	LISTA *aux;
	int qtd = quantidade(0), i;
	
	for(i = 0; i < qtd; i++){
		LISTA *l = (LISTA*) malloc(sizeof(LISTA));
		printf("Digite o %io numero: ", i + 1);
		scanf("%i",&l->num);
		fflush(stdin);
		
		if(inicio == NULL){
			inicio=l;
			l->prox=NULL;
		}else{
			l->prox=inicio;
			inicio=l;
		}	
	}
	aux=inicio;
	
	printf("Numeros Digitados: \n");
	while(aux!=NULL){
		printf("%i ",aux->num);
		aux=aux->prox;
	}
	return 0;
}
