#include<stdio.h>
#include<stdlib.h>
#define tam 300//tam=constante
int i,q, id, op;//op=opcao
double altura;//q=quantidade de usuarios
int main(void){

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
    void pesquisa();
        int emailPesq;
        do{
            printf("Digite 1 para pesquisar por email ou 2 para exibir os dados registrados.");
            scanf("%d", &op);
            switch (op){
            case 1: 
            printf("Digite o email que deseja buscar: ");
            scanf("%d", &emailPesq);
            for(i=0;i<=q;i++);
            if(email[i]==emailPesq){
                printf("Usuario|%s|-email: %s", nome, email[i]);
            }
                break;
            case 2:
            printf("\n------|DADOS REGISTRADOS|------\n\n");
            for(i=0;i<=q;i++){
                printf("ID do usuario|%d|:%d \n",i+1, rand() % 100);
                printf("nome completo do usuario|%d|: %s", nome[i]);
                printf("email do usuario|%s|: ",nome[i], email[i]);
                printf("sexo do usuario|%s|: ",nome[i], sexo[i]);
                printf("endereco do usuario|%s|: ",nome[i], endereco[i]);

            }
                break;
            
            default:
                break;
            }
        }while

    }
}

