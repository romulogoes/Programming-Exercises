#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*Faça um programa que imprima na tela a diagonal secundária de uma matriz 7 x 7*/

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int i, j,tam = 7, mat[tam][tam];

    srand(time(NULL));

    for (i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            mat[i][j] = rand() % 50;
        }
        printf("\n");
    }

    //Matriz Impressa
    printf("----- Matriz Completa -----\n\n");
    for (i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            printf("[%2d]", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //Diagonal Secundário
    printf("---- Diagonal Secundária ----\n\n");
    for (i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            if (j == tam - 1 - i){
                printf("[%2d]", mat[i][j]);
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }


        return 0;
}


