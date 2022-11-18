/*Desenvolva um programa em C que leia duas matrizes 4 x 4 e escreva uma
terceira com os maiores valores de cada posição das matrizes lidas.*/
#include<stdio.h>
int main(){
//declaracao de variaveis
int i,j;
int A[4][4],B[4][4],C[4][4];

for( i = 0; i < 4; i++){

    for( j = 0; j < 4; j++){
        printf("A(%i,%i) =", i, j);
        scanf("%d", &A[i][j]);

    }

}//fim do primeiro for principal


    for( i = 0; i < 4; i++){

        for( j = 0; j < 4; j++){
            printf("B(%i,%i) =", i, j);
            scanf("%i", &B[i][j]);
            
        }

    }//fim do segundo for principal



    for( i = 0; i < 4; i++){

        for( j = 0; j < 4; j++){

            if(A[i][j] > B[i][j]){

                C[i][j] = A[i][j];
            }

            else if (B[i][j]> A[i][j]){
                C[i][j] = B[i][j];
            }

        }

    }//fim do terceiro for principal

    for( i = 0; i < 4; i++){

        for( j = 0; j < 4; j++){
            printf("C(%d,%d) = %d\n", i, j, C[i][j]);

        }

    }//fim do quarto for principal

    return 0;

}//fim da main


