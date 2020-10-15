#include <stdio.h>

int main(void){
	int vetor[10];
	int aux = 0;
	
	for(int i = 0; i < 10; i++){
		printf("Digite um valor: ");
		
		scanf("%i", &vetor[i]);
	}
	
	for(int x = 0; x < 10 ; x++){
		for(int y = 0; y < 10; y++){
			if(vetor[x] < vetor[y]){
				aux = vetor[x];
                vetor[x] = vetor[y];
                vetor[y] = aux;
			}
		}
	}
	
	for(int z = 0; z < 10; z++){
		printf("%i", vetor[z]);
	}
	
}
