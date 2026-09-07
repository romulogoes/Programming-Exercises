#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*Faça um programa que imprima na tela apenas os valores abaixo da diagonal principal de uma 
matriz 4 x 4*/

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int i, j,tam = 4, mat[tam][tam];

    srand(time(NULL));

    for (i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            mat[i][j] = rand() % 50;
        }
    }

    printf("\n");
    printf("--- Matriz Original ---\n");
    for (i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            printf("[%2d]", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    //valores abaixo da diagonal principal
    printf("Valores abaixo da Diagonal Principal\n");
    for (i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            if (i > j){
                printf("[%2d]", mat[i][j]);
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }



        return 0;
}


