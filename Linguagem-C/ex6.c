#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*Faça um programa para calcular a transposta de uma matriz 5 x 4. Imprima as duas matrizes na 
tela*/

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int i, j, mat[5][4];

    srand(time(NULL));

    for (i = 0; i < 5; i++){
        for (j = 0; j < 4; j++){
            mat[i][j] = rand() % 50;
        }
    }

    //Impressão Matriz
    printf("----- Matriz Original -----\n");
    for (i = 0; i < 5; i++){
        for (j = 0; j < 4; j++){
            printf("[%2d]", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //Matriz Transposta
    printf("--- Matriz Transposta ---\n");
    for (j = 0; j < 4; j++){
        for (i = 0; i < 5; i++){
            printf("[%2d]", mat[i][j]);
        }
        printf("\n");
    }





        return 0;
}


