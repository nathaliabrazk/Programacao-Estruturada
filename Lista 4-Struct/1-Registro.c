/*Desenvolva um programa em C utilizando registro que permita a entrada de nome,
endereço e telefone de 3 pessoas e os imprima ao final.*/
#include<stdio.h>

//definicao de variavel struct
struct registro_usuario{//tipo de dado
char nome[30],endereco[30];
int telefone;
};//fim da definicao de struct

int main(){
struct registro_usuario pessoa[3];
int i;

    //repeticao para armazenamento de vetores
    for(i=0;i<3;i++){
        //armazenamento de nome
        printf("Digite o nome:");
        fflush(stdin);
        fgets(pessoa[i].nome,50,stdin);
   
        //armazenamento de endereco
        printf("Digite o endereco:");
        fflush(stdin);
        fgets(pessoa[i].endereco,50,stdin);

        //armazenamento de telefone
        printf("Digite o telefone:");
        scanf("%d",&pessoa[i].telefone);
        printf("\n");
    }//fim

        //impressao de dados 
        printf("\n----------DADOS REGISTRADOS----------\n");
        for(i=0;i<3;i++){
            printf("\nNome:%sEndereco:%stelefone:%d\n------------------",pessoa[i].nome,pessoa[i].endereco,pessoa[i].telefone);
        }
}//fim da main