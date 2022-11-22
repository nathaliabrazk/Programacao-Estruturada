/*Criar um registro chamado DadosAluno, que armazene o nome e idade de um aluno.
Na função main: criar uma variável que é uma estrutura DadosAluno; ler o nome e a idade
de um aluno e armazenar na variável criada; exibir na tela o nome do aluno e a idade do
aluno.*/
#include<stdio.h>
//struct
struct DadosAluno{//tipo de dado
//variaveis 
char nome[50];
int idade;
};

//main
int main(){
struct DadosAluno aluno;
printf("Informe o nome do aluno:");
fflush(stdin);
fgets(aluno.nome,50,stdin);

printf("Digite a idade do aluno:");
scanf("%d",&aluno.idade);

    //impressao de dados
    printf("\n----------DADOS INFORMADOS----------\n");
    printf("Nome:%s",aluno.nome);
    printf("Idade:%d",aluno.idade);
}//fim