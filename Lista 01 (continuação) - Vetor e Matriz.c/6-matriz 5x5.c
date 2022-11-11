/*Faça um programa que preenche uma matriz 5 x 5 com o produto do valor da
linha e da coluna de cada elemento. Ao final exiba a matriz em tela*/
#include<stdio.h>
int main(){
//declaracao de variaveis  
int i,j,produto;//i=linha,j=col
int matriz [5][5]={{1,3,5,7,9},
          /*l c*/ {2,4,6,8,10},
                  {11,12,13,14},
                  {2,5,7,0,9},
                  {4,1,6,8,3}};
//impressao da matriz
for(i=0;i<5;i++){

    for(j=0;j<5;j++){
        printf("|%i|",matriz[i][j]);
    }
    printf("\n");

}//fim do for principal

return 0;
}//fim da main