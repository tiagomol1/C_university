#include <stdio.h>

typedef struct lista{
	int num;
	struct lista *prox;
}LISTA;

int main (void){
	LISTA *inicio = NULL;
	LISTA *aux;
	int i;
	
	for (i=1;i<=10;i++){
		LISTA *l = (LISTA*) malloc(sizeof(LISTA));
		printf("Digite um numero: ");
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
	while(aux!=NULL){
		printf("%i ", &LISTA[1]);
		aux=aux->prox;
	}
	return 0;
}
