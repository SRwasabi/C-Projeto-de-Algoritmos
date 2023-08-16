#include <stdio.h>
#include <math.h>

///===============================

int menor2(int, int);
int menor3(int, int, int);

///===============================

int main(){
    int a, b, c;
    printf("atribua valor para A e B\n");
    scanf("%d %d", &a, &b);

    int menor = menor2(a, b);
    printf("Entre esses os dois, o menor eh: %d\n", menor);

    printf("Agora atribua valor para A, B e C\n");
    scanf("%d %d %d", &a, &b, &c);

    menor = menor3(a, b, c);
    printf("Entre esses os tres, o menor eh: %d\n", menor);
    return 0;
}

///===============================

int menor2(a1, b1){
    int menor = fmin(a1, b1);
    return menor;
}

///===============================

int menor3(a2, b2, c2){
    int menor = fmin( a2, fmin(b2, c2));
    return menor;
}
