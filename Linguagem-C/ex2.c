#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*Faça um programa para ordenar um vetor com 100 números inteiros. Imprima o vetor antes e 
após a ordenação.*/

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int i,j, aux, vetor[100];

    srand(time(NULL)); //função para números aletórios

    printf("Vetor antes da ordenação:\n");
    for(i = 0; i < 100; i++){  //Primeiro Vetor Ordenado.
        vetor[i] = rand() % 100;
        printf("[%d]", vetor[i]);
    };
    
    //Vetor em Ordenação
    for (i = 0; i < 99; i++){
        for (j = i + 1; j < 100; j++){
            if (vetor[i] > vetor[j]){
                aux = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = aux;
            }
        }
    }

    printf("\n");
    printf("Vetor Ordenado:\n");
    for(i = 0; i < 100; i++){  //Vetor Ordenado.
        printf("[%d]", vetor[i]);
    };
    return 0;
}

