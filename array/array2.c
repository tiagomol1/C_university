#include <stdio.h>

typedef struct lista{
	int num;
	struct lista *prox;
}LISTA;

int main (void){
	LISTA *inicio = NULL;
	LISTA *aux;
	
	while(1){
		LISTA *l = (LISTA*) malloc(sizeof(LISTA));
		printf("Digite um numero: (-1 para sair)");
		scanf("%i",&l->num);
		fflush(stdin);
		if(l->num==-1){
			break;
		}
		if(inicio == NULL){
			inicio=l;
			l->prox=NULL;
		}else{
			l->prox=inicio;
			inicio=l;
		}	
	}
	
	aux=inicio;
	while(aux!=NULL){
		printf("%p - ",aux);
		printf("%i - ",aux->num);
		printf("%p - \n",aux->prox);
		aux=aux->prox;
	}
	return 0;
}
