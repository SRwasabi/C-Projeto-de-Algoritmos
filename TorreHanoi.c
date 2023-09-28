#include <stdio.h>
#include <stdlib.h>

void Hanoi(int, char, char, char);

int main(){
    int n = 4;
    Hanoi(n, 'A', 'B', 'C');
    return 0;
}

void Hanoi(int n, char from, char aux, char to){
    if(n == 1){
        printf("\tRodela %d de %c para %c\n", n, from, to);
    }
    else{
        Hanoi(n-1, from, to, aux);
        printf("\tRodela %d de %c para %c\n", n, from, to);
        Hanoi(n-1, aux, from, to);
    }
}
