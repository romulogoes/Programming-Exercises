#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*Crie um programa que preencha uma matriz 5x10 com números inteiros. Em seguida faça:
a) some cada uma das linhas armazenando o resultado em um vetor;
b) some cada uma das colunas armazenando o resultado em um vetor;
c) Imprima os dois vetores identificando qual é a soma das linhas e qual é a soma das colunas.*/

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int i, j, soma, mat[5][10], linhas[5], colunas[10];

    srand(time(NULL));

    for (i = 0; i < 5; i++){
        for (j = 0; j < 10; j++){
            mat[i][j] = rand() % 10;
            printf("[%2d]", mat[i][j]);
        };
        printf("\n");        
    }

    //a Soma das Linhas;

    for (i = 0; i < 5; i++){
        soma = 0;
        for (j = 0; j < 10; j++){
            soma += mat[i][j];
        }
        linhas[i] = soma;     
    }

    printf("\n");

    //b Soma das colunas
    
    for (j = 0; j < 10; j++){
        soma = 0;
        for (i = 0; i < 5; i++){
            soma += mat[i][j];
        }
        colunas[j] = soma;
        }

    //Impressão dos Vetores
    printf("\n-------- Soma das Colunas --------\n");
    for (i = 0; i < 5; i++){
        printf("Linha %d: [%2d]\n",i+1, linhas[i]); 
    }
    
    printf("\n-------- Soma das Linhas --------\n");
    for (j = 0; j < 10; j++){
        printf("Coluna %d: [%2d]\n",j+1, colunas[j]); 
    }
    
    
    return 0;
}

