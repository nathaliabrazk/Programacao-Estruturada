/*Faça um programa em C para ler 10 números DIFERENTES a serem
armazenados em um vetor. Os dados deverão ser armazenados no vetor na
ordem que forem sendo lidos, sendo que caso o usuário digite um número que
já foi digitado anteriormente, o programa deverá pedir para ele digitar outro
número. Note que cada valor digitado pelo usuário deve ser pesquisado no
vetor, verificando se ele existe entre os números que já foram fornecidos. Exibir
na tela o vetor final que foi digitado.
*/
//precisa arrumar
#include<stdio.h>
int main (){
    int numero[10],i,repetido,j;
    for ( i = 0; i < 10; i++){

       printf("Me forneca o numero para a posicao|%d| :",i);
       scanf("%d",&numero[i]);
       repetido=numero[i];

       for ( j = 0; j < 10; j++){
            if(repetido==numero[j]){
                printf("Me forneca outro numero pfv pois o num %d ja existe :",numero[j]);
                scanf("%d",&numero[j]);
            }
            
        }//final do for
    
    }//final do for principal


}//final da main