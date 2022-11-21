/*Escreva uma função que receba por parâmetro dois números e retorne o maior deles
*/
#include<stdio.h>
//declaracao de funcao 
int maiorNumero(){
    //declaracao de variaveis 
    int i, numero[2];

//repeticao para preenchimento de vetor
    for(i=0;i<2;i++){
        printf("Informe um numero:");
        scanf("%d",&numero[i]);
    }
    //validacao do numero
    if(numero[0]>numero[1]){
        printf("Maior numero=%d", numero[0]);
    }else if(numero[1]>numero[0]){
        printf("Maior numero=%d",numero[1]);
    }else{
        printf("Numeros iguais!");
    }//fim da validacao

}//fim da funcao 

int main(){
    maiorNumero();
  
}