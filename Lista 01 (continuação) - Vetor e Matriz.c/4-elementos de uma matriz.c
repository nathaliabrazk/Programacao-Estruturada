/*Crie um programa em C que leia os elementos de uma matriz inteira 6 x 6 e
imprima todos os elementos, exceto os elementos da diagonal principal*/
#include<stdio.h>
int main(){
//declaracao de variaveis
int i,elemento[6][6],j;
for(i=1;i<6;i++){
    
    for(j=1;j<6;j++){
        printf("Informe um numero para a posicao|%d||%d|:",i,j);
        scanf("%d",&elemento[i][j]);
    }
}
for(j=1;j<6;j++){
printf("\nNumeros digitados: %d",j);
}



}
    

