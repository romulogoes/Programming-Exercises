#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*4) Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos
diferentes.
O vendedor recebe um salário de R$1100,00 acrescido de 5% do valor total de suas
vendas.
O valor unitário dos objetos deve serA informado e armazenado em um vetor;
a quantidade vendida de cada objeto deve ficar em outro vetor, mas na mesma posição.
Crie um programa que receba os preços e as quantidades vendidas, armazenando-os em seus respectivos vetores. Depois,
determine e mostre:
a) A quantidade vendida, valor unitário e valor total de cada objeto.
Ao final, deverão ser mostrados o valor total das vendas e o valor da comissão que será paga ao vendedor.
b) O valor do objeto mais vendido e sua posição no vetor (em caso de empates mostre todos
empatados).*/

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    float preco[10], tot[10], vendF = 0, comissao = 0;
    int i, qtdP[10], maisV = 0;

    for(i = 0; i < 10; i++){
        printf("Digite o preço do %dº produto:R$ ", i+1);
        scanf("%f", &preco[i]);
        printf("Quantidade vendida: ");
        scanf("%d", &qtdP[i]);
    }

    printf("\n----------------------///////-------------------------\n");

    for(i = 0; i < 10; i++){
        printf("Quantidade vendida do produto %d: %d\n",i+1, qtdP[i]);
        printf("Valor unitário do produto R$ %.2f\n ", preco[i]);
        tot[i] = qtdP[i] * preco[i];
        printf("Valor total:R$ %.2f\n", tot[i]);
        vendF += tot[i];

        printf("\n-------------------------------------------\n");
    }

    comissao = (vendF * 5)/100;
    printf("Total de Vendas: R$ %.2f\n", vendF);
    printf("Valor da comissão á receber %.2f\n", comissao);

    for(i = 0; i < 10; i++){
       if(qtdP[i] > maisV){
        maisV = qtdP[i];
       }

    }

    for(i = 0; i < 10; i++){
       if(qtdP[i] == maisV){
        printf("produto %d - Vendidos - %d - Valor Unitário R$%.2f - posição %d\n", i, qtdP[i], preco[i], i);
       }
    }

    printf("Fim do Programa!!");
    return 0;
}


