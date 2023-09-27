#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*struct Veiculo_lista{
        char marca[20];
        char modelo[80];
        int anoFabricacao;
    };
    Anota��es pessoas -> Desse jeito vc precisa declarar struct toda vez em uma nova vari�vel
*/

typedef struct{
    char marca[20];
    char modelo[80];
    int anoFabricacao;
}Veiculo_lista; // N�o precisa declarar struct em uma nvoa vari�vel

int qnt = 0;

void adicionar(Veiculo_lista**, char[], char[], int);
void remover(Veiculo_lista**, char[], char[]);
int* buscar(Veiculo_lista**, char[], char[]);


int main(){
    char marca[20];
    char modelo[80];
    int anoFabricacao;

    int i, escolha = 0;
    Veiculo_lista *veiculo = malloc(sizeof(Veiculo_lista));

    setlocale(LC_ALL, "Portuguese");

    do{
        printf("\n");
        printf("\t[1] Adicionar Ve�culo\n\t[2] Remover Ve�culo\n\t[3] Buscar Ve�culo\n\t[4] Sair\n");
        printf("\n");
        printf("\tEscolha uma op��o: ");
        scanf("%d", &escolha);
        printf("\n");
        switch (escolha){
            case 1:
                printf("\tInforme a marca do ve�culo o qual deseja adicionar: ");
                scanf("%s", marca);
                printf("\tInforme o modelo do ve�culo: ");
                scanf("%s", modelo);
                printf("\tInforme o ano de fabrica��o ");
                scanf("%d", &anoFabricacao);
                adicionar(&veiculo, marca, modelo, anoFabricacao);
                break;

            case 2:
                printf("\tInforme a marca do ve�culo o qual deseja remover: ");
                scanf("%s", marca);
                printf("\tInforme o modelo do ve�culo: ");
                scanf("%s", modelo);
                remover(&veiculo, marca, modelo);
                break;

            case 3:
                printf("\tInforme a marca do ve�culo o qual deseja encontrar: ");
                scanf("%s", marca);
                printf("\tInforme o modelo do ve�culo: ");
                scanf("%s", modelo);
                int resu = buscar(&veiculo, marca, modelo);
                if(resu != NULL){
                    printf("\n\tEst� alocado na mem�ria: %d\n\n", resu);
                }
                else{
                    printf("\n\tN�o foi encontrado\n\n");
                }
                break;

            case 4:
                printf("\tPrograma encerrado\n");
                break;

            default:
                printf("\n\tEsta escolha n�o est� dentro do escopo de op��es\n\n");
        }

    }while(escolha != 4);

    for(i = 0; i<qnt; ++i){
        printf("\n I  = %i",i);
        printf("\n Marca = %s",veiculo[i].marca);
        printf("\n Modelo = %s",veiculo[i].modelo);
        printf("\n Ano de fab = %i",veiculo[i].anoFabricacao);
    }

    free(veiculo);
    return 0;
}

void adicionar(Veiculo_lista **veiculo, char marca[20], char modelo[80], int ano){
    (*veiculo) = realloc((*veiculo), sizeof(Veiculo_lista)*(qnt+1));
    strcpy((*veiculo)[qnt].marca, marca);
    strcpy((*veiculo)[qnt].modelo, modelo);
    (*veiculo)[qnt].anoFabricacao = ano;
    (qnt++);
    printf("\n%i",qnt);
    printf("\n\n\tVeiculo adicionado com sucesso!\n\n");
}

void remover(Veiculo_lista **veiculo, char marca[20], char modelo[80]){
    int i = 0, j;
    for(i = 0; i <= qnt; i++){
        if(strcmp(marca, (*veiculo)[i].marca) == 0 && strcmp(modelo, (*veiculo)[i].modelo) == 0){
            if(qnt > 1){
                for(j = i; j < qnt; j++){
                    strcpy((*veiculo)[j].marca, (*veiculo)[j+1].marca);
                    strcpy((*veiculo)[j].modelo, (*veiculo)[j+1].modelo);
                    (*veiculo)[j].anoFabricacao = (*veiculo)[j+1].anoFabricacao;
                }
                (qnt--);
                (*veiculo) = realloc((*veiculo), sizeof(Veiculo_lista)* qnt);
            }
            else{
                strcpy((*veiculo)[0].marca, "");
                strcpy((*veiculo)[0].modelo, "");
                (*veiculo)[0].anoFabricacao = 0;
            }
            printf("\n\n\tVeiculo removido com sucesso!\n\n");
        }
    }
}

int* buscar(Veiculo_lista **veiculo, char marca[20], char modelo[80]){
    int *p, i;
    for(i = 0; i <= qnt; i++){
        if(strcmp(marca, (*veiculo)[i].marca) == 0 && strcmp(modelo, (*veiculo)[i].modelo == 0)){
            p = (*veiculo + i);
            //printf("\n\tO Ve�culo se encontra na posi��o? %d", i);
            return p;
        }
        else{
            return NULL;
        }
    }
}
