#include <stdio.h>
#include <math.h>

void max(int, int);

int main(){
    int a, b;
    printf("Informe A e B\n");
    scanf("%d %d", &a, &b);
    max(a, b);

    return 0;
}

void max(aM, bM){
    int C = fmax(aM, bM);
    printf("O maior entre eles eh %d\n", C);
}
