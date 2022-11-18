/*Faça um algoritmo que leia a idade de até 100 pessoas e apresente a média entre todas, além
de identificar a mais velha e a posição em que ela se encontra no vetor. A idade mais velha
pode aparecer em mais de uma posição*/
#include<stdio.h>
#include<math.h>
int main(void){
//declaracao de variaveis
int i=0,p=0;//p=numero de pessoas 
    do{
    //definicao do tamanho dos vetores
    printf("Informe a quantidade de pessoas: ");
    scanf("%d", &p);
    printf("\n");
        if(p<=100){
            break;
        }else{
            printf("Quantidade maxima de pessoas e 100, por favor informe outro valor.");
        }
        }while(p<100);
            //declaracao de variavies com  os vetores definidos
            float media;
            int idade[p], soma=0, maisVelha=0;
                //definicao de idades
                for(i=0;i<p;i++){
                    printf("Informe a idade da pessoa|%d|:", i+1);
                    scanf("%d", &idade[i]);
                }//definicao do valor da soma
                 for(i=0;i<p;i++){
                    soma+=idade[i];
                    media=soma/p;
                 }//impressao da media
                  printf("\nMedia das idades: %.1f\n", media);
                //encontro da maior idade e sua posicao
                  for(i=0;i<p;i++){
                    if(idade[i]>=maisVelha){
                        maisVelha=idade[i];
                        
                        }
                    }
                     printf("A maior idade informada foi: %d, na posicao %d", maisVelha, i);
                
                  }
                   
                







 