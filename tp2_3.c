#include <stdio.h> #include <stdlib.h>

#define N 5 #define M 7

int main() { int mt[N][M];

 
int *p = &mt[0][0]; // Inicializamos un puntero al primer elemento de la matriz

for(int i = 0; i < N; i++) {
    for(int j = 0; j < M; j++) {
        *(p + i*M + j) = 1 + rand() % 100; // Accedemos a cada elemento de la matriz utilizando aritmética de punteros
        printf("%d ", *(p + i*M + j));
    }
    printf("\n");
}

return 0;
}

