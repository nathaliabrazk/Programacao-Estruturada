#include<stdio.h>
#include<stdlib.h>
#define tam 300//tam=constante
int main(void){
//declaracao de variaveis
int i,q, id;
double altura;//q=quantidade de usuarios

//definicao do tamanho dos vetores
do{
    printf("Informe a quantidade de usuarios: ");
    scanf("%d", &q);
    printf("\n");
    if(q<=100){
        break;
    }
    if(q>1000){
        printf("Maximo de usuarios e 1000, por favor informe outro valor.");
    }
}while(q<=1000);
//definicao de variaveis com vetores
do{
char nome[q][tam], email[q][tam], sexo[q], endereco[q];
//preenchimento de vetores
for(i=0;i<=q;i++){
printf("ID do usuario|%d|:%d \n",i+1, rand() % 100);
printf("Digite o nome completo do usuario|%d|: ",i+1);
scanf("%s", &nome[i]);
fflush(stdin);
printf("Digite o email do usuario|%s|: ",nome[i]);
scanf("%s", &email[i]);
fflush(stdin);
printf("Digite o sexo do usuario|%s|: ",nome[i]);
scanf("%s", &sexo[i]);
fflush(stdin);
printf("Digite o endereco do usuario|%s|: ",nome[i]);
scanf("%s", &endereco[i]);
printf("\n");   
}//fim da funcao cadastro
}while(op==1)


}
}
void pesquisa(){
    do{
        printf("Digite 1 para pesquisar por email ou 2 para imprimir os dados cadastrados");
    }
}

