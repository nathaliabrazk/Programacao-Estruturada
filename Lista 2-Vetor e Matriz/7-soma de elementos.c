/*Crie um programa em C que leia uma matriz 3 x 3 elementos, calcule a soma
dos elementos que estão na diagonal principal, abaixo da diagonal principal e
acima da diagonal principal, ao final mostre os três resultados obtidos.*/
#include<stdio.h>
int main(){
    int matriz[3][3];
    int i,j,coluna1=0,coluna2=0,coluna3=0;
	
	for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf ("Informe o valor da posicao [%d] [%d]:" , i, j);
            scanf("%d", &matriz[i][j]);
            printf("\n");
        }
    }
    printf("\n-----MATRIZ PREENCHIDA-----\n\n");
	for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
	for (i=0; i<3; i++){
        coluna1 = coluna1 + matriz[i][i];
        printf("%d", coluna1); 
    }
    
	for (i=0; i<2; i++){
    	coluna2 = coluna2 + matriz[i][i+1]; 
    }
    
	for (i=0; i<2; i++){ 
       coluna3 = coluna3 + matriz[i+1][i];
    }
   
	printf("Soma da diagonal Principal e = %d\n",coluna1);
    printf("Soma da diagonal superior e = %d\n",coluna2);
    printf("Soma da diagonal inferior e = %d\n",coluna3);
}

