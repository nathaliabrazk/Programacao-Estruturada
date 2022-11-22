/*Defina uma estrutura em C para armazenar dados de um veículo (Marca, modelo, cor,
quantidade de portas, motorização), crie uma função para armazenar os dados de 10
veículos, outra para mostrar os dados armazenados, a função main() deve conter um
pequeno menu para chamar as funções criadas.*/
//funcao para dados do veiculo
#include <stdio.h>
#include <string.h>

//definicao de struct
typedef struct veiculo{
    //variaveis
    char marca[20], modelo[20], cor[15], motorizacao[50];
    int portas;

} veiculo;

veiculo veiculos[10];

void dataInput(){
    
    int i;

    for (i = 0; i < 10; i++){
        printf("\nInforme a marca do veiculo |%d|: ", i+1);
        fgets(veiculos[i].marca, 20, stdin);
        printf("Informe o modelo do veiculo |%d|: ", i+1);
        fgets(veiculos[i].modelo, 20, stdin);
        printf("Informe a cor do veiculo |%d|: ", i+1);
        fgets(veiculos[i].cor, 15, stdin);
        printf("Informe a motorizacao do veiculo |%d|: ", i+1);
        fgets(veiculos[i].motorizacao, 50, stdin);
        printf("Informe a quantidade de portas do veiculo |%d|: ", i+1);
        scanf("%d", &veiculos[i].portas);
        fflush(stdin);
    }
    
}//final 

void dataOutput(){

    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Marca do veiculo %d: %s",i+1, veiculos[i].marca);
        printf("Modelo do veiculo %d: %s",i+1, veiculos[i].modelo);
        printf("Cor do veiculo %d: %s",i+1, veiculos[i].cor);
        printf("Motorizacao do veiculo %d: %s",i+1, veiculos[i].motorizacao);
        printf("O veiculo %d possui &d portas: %s",i+1, veiculos[i].portas);
    }
    
}

int main(void){

    int opcao, i;

    do{
        printf("\n------------------MENU------------------\n");
        printf("[1] Inserir dados\t[2] Mostrar dados\n");
        printf("\nDigite a opcao:");
        scanf("%d", &opcao);
        fflush(stdin);

        switch (opcao)
        {
        case 1:
            dataInput();
            break;

        case 2:
            dataOutput();
            break;

        default:
            break;
        }
    }while(opcao == 1 || opcao == 2);
        

    return 0;
}