#include <stdio.h>

int pitagoras(int n);

int main(void) {
	pitagoras(6);
    return 0;
}

int pitagoras(int n) {
    if (n == 1) {
        printf("1 ->", n);
    	printf(" 1 \n");
        return 1;
    } else {
        int resultado = n + pitagoras(n - 1);
        printf("%i ->", n);
        printf(" %i \n",resultado);
        return resultado;
    }
}
