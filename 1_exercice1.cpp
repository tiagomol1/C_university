#include<stdio.h>

int soma(int x, int y){
	int resultado;
	resultado = x + y;
	return(resultado);
}
int subtracao(int x, int y){
	int resultado;
	resultado = x - y;
	return(resultado);
}

int main(void){
	int x, y, somar, subtrair;
	x = 10;
	y = 5;
	
	somar = soma(x, y);
	subtrair = subtracao(x, y);
	
	printf("Soma: %d", somar);
	printf("Subtracao: %d", subtrair);
	printf("Soma: %d", somar);
}

