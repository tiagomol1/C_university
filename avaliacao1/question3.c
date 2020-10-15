#include <stdio.h>

void XY(char *t);

int main (void){
	char a[] = {"ESTRUTURA"};
	XY(a);
	return 0;
}

void XY(char *t){
	int i;
	for(i=8; i>3; i--){
		printf("%c", t[i]);
	}
}
