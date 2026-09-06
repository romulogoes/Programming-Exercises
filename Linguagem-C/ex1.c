#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que leia 10 números reais e os armazene em um vetor. Em seguida, leia um 
código inteiro e faça uma das ações abaixo:
0 – finaliza o programa;
1 – imprime o vetor na ordem do início ao fim;
2 – imprime o vetor na ordem inversa (do fim para o início).
O programa deve funcionar até que o usuário digite 0 para finalizar.*/

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float vetor[10];
    int opc, i;

    printf("Digite 10 números reais:\n");
    for (i = 0; i < 10; i++) {
        printf("Posição [%d]: ", i);
        scanf("%f", &vetor[i]);
    } 

    do {
        printf("\n------------ MENU ------------\n");
        printf("0 - Finalizar o programa\n");
        printf("1 - Imprimir na ordem direta\n");
        printf("2 - Imprimir na ordem inversa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opc);

        switch (opc) {
            case 0:
                printf("\nPROGRAMA FINALIZADO!!!.\n");
                break;

            case 1:
                printf("\nVetor na ordem direta:\n");
                for (i = 0; i < 10; i++) {
                    printf("[%.2f] ", vetor[i]);
                }
                printf("\n");
                break;

            case 2:
                printf("\nVetor na ordem inversa:\n");
                for (i = 9; i >= 0; i--) {
                    printf("[%.2f] ", vetor[i]);
                }
                printf("\n");
                break;

            default:
                printf("\nOpção inválida! Tente novamente.\n");
                break;
        }

    } while (opc != 0);
   
    return 0;
}


