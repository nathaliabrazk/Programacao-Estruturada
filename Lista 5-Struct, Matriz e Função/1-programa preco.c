/*1. Considerando o conjunto de dados abaixo para criação da estrutura, crie um programa
em C que leia o preço, o nome e as baixas de todos os dias de todos os produtos, após
percorra a estrutura de dados e verifique qual foi o produto que teve mais baixa, ou seja,
que foi mais vendido. Ao final, mostre o nome e quantas unidades deste produto foram
vendidas. A estrutura deve conter: código, nome, preço, baixa como uma matriz 4X6,
onde o 4 representa as semanas e o 6 cada dia da semana (segunda a sábado)*/
#include<stdio.h>

typedef struct product{
    float preco;
    int codigo, baixa[2][3];
    char nome[15];
}product;

int main(void){

    product produtos[3];
    int i, j, k;
    float somaLinha = 0, somaColuna = 0;

    for ( i = 0; i < 3; i++)
    {
        printf("Digite o nome do produto: ");
        fgets(produtos[i].nome, 15, stdin);
        printf("Digite o codigo do produto: ");
        scanf("%d", &produtos[i].codigo);
        printf("Digite o preco do produto: ");
        scanf("%f", &produtos[i].preco);

        for(j=0; j<2; j++){

            for(k=0; k<3; k++){

                printf("Digite a quantidade de produtos vendidos no dia %d: ", k+1);
                scanf("%d", &produtos[i].baixa[j][k]);

            }

        }
        fflush(stdin);
    }
    
    system("cls");


    for(i=0; i<1; i++){

        for(j=0; j<2; j++){


            for(k=0; k<3; k++){
                somaColuna += produtos[i].baixa[j][k];    
            }
            somaLinha += somaColuna;
            printf("\n");
        }
    }

    //impressao de resultados    
    printf("%d", somaLinha);


    return 0;
}