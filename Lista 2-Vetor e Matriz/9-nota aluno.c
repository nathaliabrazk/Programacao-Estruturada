/*Faça um programa em C que leia uma matriz 10 x 3 com as notas de 10
alunos em 3 disciplinas. Em seguida, calcule e escreva o número de alunos
cuja pior nota foi na disciplina 1, o número de alunos cuja pior nota foi na
disciplina 2, e o número de alunos cuja a pior nota foi na disciplina 3. Em caso
de empate das piores notas de um aluno, o critério de desempate é arbitrário,
mas o aluno deve ser contabilizado apenas uma vez*/
#include<stdio.h>
int main(){
int matriz[10][3];
    int piorNota[3];
	int pior = 100;
	int aluno[3];
	int materia[3];
	int i;
	int j;
    
	for(i=0; i<10; i++){
        for (j=0; j<3; j++){
            printf("Informe a nota da disciplina|%d| do aluno|%d|[%d] [%d]: ", j, i, i, j);
            scanf("%d", &matriz[i][j]);
        } 
    }
    
    for (j=0; j<3; j++){
        pior = 100;
        for(i=0; i<10; i++){
            if (matriz[i][j] < pior){
                pior = matriz[i][j];
                piorNota[j] = matriz[i][j];
                aluno[j] = i;
                materia[j] = j;
            }
        } 
    }
    
    for (i=0; i<3; i++){
        printf("Pior aluno na materia|%d| Foi o = %d , com a nota=%d\n", i, aluno[i], piorNota[i]);
    }
}