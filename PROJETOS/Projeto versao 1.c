#include<stdio.h>
#include<stdlib.h>
#define tam 1000
#define alturaMax 2000
//declaracao de variaveis globais
int i;
int ID[tam][10];
static int linha;
int op;//op=opcao digitada pelo usuario
char usuario[tam][60], nome[tam][60], email[tam][60], sexo[tam][15], endereco[tam][100], feminino, masculino;
double altura[tam];
void cadastro();
void pesquisa();
int main(){
cadastro();
pesquisa();
}
//funcao para cadastro
void cadastro(){
    static int linha;
    do{
        printf("\n------|CADASTRO DE USUARIOS|------\n\n");
        
        //geracao aleatoria para ID
        printf("ID do usuario-%d\n",rand() % 100);
        //precisa arrumar armazenamento do ID

        printf("Digite o nome completo do usuario: ");
        scanf("%s", &nome[linha]);
        fflush(stdin);

        //precisa arrumar validacao de email
        printf("Digite o email do usuario(a)|%s|: ",nome[linha]);
        scanf("%s", &email[linha]);
        fflush(stdin);

        //precisa arrumar validacao de sexo
        printf("Digite o sexo do usuario(a)|%s|: ", nome[linha]);
        scanf("%s", &sexo[linha]);
        fflush(stdin);

        printf("Digite o endereco do usuario(a)|%s|: ", nome[linha]);
        scanf("%s", &endereco[linha]);
        fflush(stdin);

        //precisa arrumar validacao de altura
        printf("Digite a altura do usuario(a)|%s|: ", nome[linha]);
        scanf("%d", &altura[linha]);

        printf("\nDigite 1 para adicionar mais um usuario ou outro valor qualquer para sair.");
         scanf("%d", &op);
        linha++;
    }while(op==1);
}//fim da funcao cadastro

//funcao para pesquisa
void pesquisa(){
//declaracao de variaveis locais
char emailBusca[60];
do{
printf("\nDigite 1 para pesquisar por email registrado ou 2 para imprimir valores registrados.");
scanf("%d", &op);
switch (op){
    //para fazer busca pelo email
    case 1:
    printf("\nDigite o email que deseja buscar: ");
    scanf("%d", &emailBusca);
    for(i=0;i<tam;i++){
        if(strcmp(email[i], emailBusca[i])){
            printf("\nNome: %s, Email-%s", nome[i], email[i]);
        }
    }
break;
    //para imprimir dados registrados
    case 2:
    for(i=0;i<tam;i++){
    printf("\n-----DADOS REGISTRADOS------\n\n") ;
    printf("ID do usuario:%s ",nome[linha]);
    printf("Nome do usuario:%s",nome[linha]);
    printf("Email do usuario:%s",email[linha]);
    printf("Sexo do usuario:%s",sexo[linha]);
    printf("Endereco do usuario:%s",endereco[linha]);
    printf("Altura do usuario:%d", altura[linha]);
    break;
    }
    default:
    printf("\nOpcao invalida");
    break;
}   
printf("Digite 1 para continuar buscando por email.");
scanf("%d", &op);
} while(op==1);
}