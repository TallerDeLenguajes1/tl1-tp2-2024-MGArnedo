#include <stdio.h> #include <stdlib.h>

#define N 20

int main() { int i; double vt[N]; double *ptr = vt; // Apuntador que se�ala al comienzo del vector

 
for(i = 0; i < N; i++) { 
    *(ptr + i) = 1 + rand() % 100;
    printf("%.2f ", *(ptr + i)); 
} 
return 0; 
}
