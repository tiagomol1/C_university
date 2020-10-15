#include <stdio.h>

void torrehanoi(int ndisco, char haste1, char haste2, char haste3);

int main(void) {
    torrehanoi(3, 'A', 'B', 'C');
    return 0;
}

void torrehanoi(int ndisco, char haste1, char haste2, char haste3) {
    if (ndisco == 1) {
        printf("Disco 1 de %c para %c\n", haste1,haste3);
    } else {
        torrehanoi(ndisco - 1, haste1, haste3, haste2);
        printf("Disco %i de %c para %c\n" ,ndisco,haste1,haste3);
        torrehanoi(ndisco - 1, haste2, haste1, haste3);
    }
}
