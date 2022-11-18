/*Crie um programa em C que leia 10 números inteiros e armazene em um vetor
v. Declare dois novos vetores v1 e v2. Copie os valores ímpares de v para v1,
e os valores pares de v para v2. Note que cada um dos vetores v1 e v2 podem
ter no máximo 10 elementos, mas nem todas as posições do vetor são
utilizadas. No final escreva os elementos que foram armazenados em v1 e v2*/
#include<stdio.h>
int main(){
//declaracao de variaveis
int i,v[10],v1[10],v2[10],par[10],impar[10],numero;

for(i=0;i<10;i++){
printf("Digite um numero para a posicao|%d|: ",i);
scanf("%d",&v[i]);
printf("\n");
numero=v[i]%2;

if(numero==0){
    v1[i]=v1;
    par[i]=1;
}else if (numero>0){
    v2[i]=v[i];
    impar[i]=1;
}

}//final for

for(i=0;i<10;i++){

    if(impar[i]=1){
    printf("\nNumero impar:%.0d,na posicao:%d",v2[i],i);
    }
   
}//final for

for(i=0;i<10;i++){
    if(par[i]=1){
    printf("\nNumero par:%.0d,na posicao:%d",v1[i],i);
    }
   
}


}//fim da main