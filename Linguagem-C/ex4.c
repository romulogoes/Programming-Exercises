#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*faça um programa que imprima na tela a diagonal principal de uma matriz 5 x 5.*/

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int i, j, mat[5][5];

    srand(time(NULL));

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            mat[i][j] = rand() % 50;
        }
        printf("\n");
    }

    //Impressão da Matriz
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
                printf("[%2d] ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //Impressão Matriz Principal
    printf("Matriz Principal\n");
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            if(i == j){
                printf("[%2d] ", mat[i][j]);
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }

        return 0;
}


