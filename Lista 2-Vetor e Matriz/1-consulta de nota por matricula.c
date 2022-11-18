/*Escreva um programa em C que lê matricula e as notas de no máximo 100
alunos. O programa deve ler e armazenar uma nova matricula e uma nova nota
enquanto o usuário desejar. Após o armazenamento permita ao usuário
consultar a nota de um aluno digitando sua matricula, o programa deve permitir
no máximo 10 consultas para um mesmo ciclo de execução do programa.*/
#include<stdio.h>
int main(){
  //declaracao de variaveis
  int i,nota[100],continua,count=0,pesquisa;
  char matricula[100];
  
    for (i=0; i<100; i++){
        fflush(stdin);
        printf("Informe a matricula do aluno |%d|:",i+1);
        scanf("%c",&matricula[i]);
        fflush(stdin);
        printf("Informe a nota do aluno |%d|:",i+1);
         scanf("%d",&nota[i]);
        printf("\nDeseja inserir um usuario? Digite 1 para sim ou 0 para nao: ");
        fflush(stdin);
        scanf("%d", &continua);
        count ++;
                
        if(continua == 0){
            printf("Pessoas cadastradas atualmente %d\n\n", count);
            break;
        }
    }//fim do for

    for ( i=0; i<100; i++){
        printf("Deseja consultar alguma nota? Digite 1 para sim ou 0 para nao:");
        scanf("%d",&continua);

        if (continua == 1){
            printf("Me forneca a matricula:");
            scanf("%d",&pesquisa);
            for ( i = 0; i < 4; i++){
                if (pesquisa == matricula[i]){
                    printf("Matricula-%c",matricula[i]);
                    printf("Nota-%d",nota[i]);
                    break;
                }
            }
        }//fim do if
        else if( continua == 0){
            break;
        }
    }//fim do for
}//fim da main