/*Elabore um algoritmo que leia um conjunto de valores inteiros correspondentes a até 80
notas, variando de 0 a 10, dos alunos de uma turma (vários alunos). Calcule a frequência de
cada nota e apresente uma tabela contendo os valores das notas e suas respectivas frequências.
*/
#include<stdio.h>
int main(){
//declaracao de variaveis
int i,x,j,frequencia,aluno[20][4];

for(i=0;i<20;i++)//looping para valores da linha-i
    for(x=0;x<4;x++){//looping para valores da coluna-x
    printf("Informe as notas[%d][%d]:",i,x);
    scanf("%d",&aluno[i][x]);
    printf("\n");
    }

    printf("\n---------------DADOS REGISTRADOS---------------\n\n");

    for(i=0;i<20;i++)
        for(x=0;x<4;x++){
        printf("Notas[%d][%d]=%d\n",i,x,aluno[i][x]);
    }
}//fim da main