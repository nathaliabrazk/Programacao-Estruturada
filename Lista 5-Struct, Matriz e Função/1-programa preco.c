/*1. Considerando o conjunto de dados abaixo para criação da estrutura, crie um programa
em C que leia o preço, o nome e as baixas de todos os dias de todos os produtos, após
percorra a estrutura de dados e verifique qual foi o produto que teve mais baixa, ou seja,
que foi mais vendido. Ao final, mostre o nome e quantas unidades deste produto foram
vendidas. A estrutura deve conter: código, nome, preço, baixa como uma matriz 4X6,
onde o 4 representa as semanas e o 6 cada dia da semana (segunda a sábado)*/
#include<stdio.h>
int main(){
    int preco,nome,baixa[4][6],produto_mais_vendido=0;
    char nome[20];

    printf("Digite o nome do produto:");
    scanf("%c",&nome);

    printf("Digite o preco do produto:");
    scanf("%d",&preco);


}