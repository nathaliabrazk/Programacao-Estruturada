/*Elabore um algoritmo que leia um conjunto de valores inteiros correspondentes a até 80
notas, variando de 0 a 10, dos alunos de uma turma (vários alunos). Calcule a frequência de
cada nota e apresente uma tabela contendo os valores das notas e suas respectivas frequências.*/
#include<stdio.h>
int main(){
int i,q,j,frequencia,aux;

//definicao do tamanho do vetor
printf("Informe a quantidade de notas a serem armazenadas:");
scanf("%d",&q);

//validacao do tamanho do vetor
if(q>80){
    printf("Quantidade maxima e 80!");
    return;
}
//declaracao do vetor 
int nota[q];

//preenchimento do vetor com as notas
do{
    for(i=0;i<q;i++){
    printf("Nota|%i|:",i);
    scanf("%d",&nota[i]);

        //validacao da nota 
        if(nota[i]<0 || nota[i]>10){
            printf("Nota invalida\n");
        }else{
            printf("Nota valida!\n");
        }

    }//fim do for

}while (nota[i]<0 && nota[i]>10);

        //impressao de dados
        printf("\n\n---------------NOTAS---------------\n\n");
        for(i=0;i<q;i++){
            printf("Nota|%i|=%d\n",nota[i]);
        }

        //verificacao de numeros repetidos 
        printf("Numeros repetidos no vetor: \n");
        for(i=0;i<5;i++){
        aux=0;

            for(j=i+1;j<q;j++){
                if(nota[i]== nota[j]){
                aux=1;
                }
                    if(aux=i){
                    printf("%d\n",nota[i]);
                    }
            }
        }
}//fim da main