#include <stdio.h>

int delta(int, int, int);
void ver(int);
//int Eq2(int, int, int);
///=====================================

int main (){
    int a, b, c;
    printf("Informe o valor de A B e C:\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a == 0){
        printf("Essa raiz nao existe");
        return 1;
    }

    int Vdelta = delta(a, b, c);
    ver(Vdelta);

    return 0;
}

///=====================================
int delta(aE, bE, cE){
    int resu = (bE*bE) + (-4*aE*cE);


    return resu;
}
///=====================================
void ver(delta2){
    if(delta2 >= 0){
        printf("Raizes reais\n");
    }
    else{
        printf("Raizes nao reais\n");
    }
    return 0;
}

///=====================================

/*
int Eq2(delta2, b2, a2){
    int x1, x2;
    x1 = (-b2 + delta2*(1/2))/(2*a2);
    x2 = (-b2 - delta2*(1/2))/(2*a2);
    return x1, x2;
}
*/
