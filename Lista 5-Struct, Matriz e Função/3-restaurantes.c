/*Crie uma estrutura para descrever restaurantes. Os membros devem armazenar o
nome, o endereço, o preço médio e o tipo de comida. Crie uma matriz de estruturas e
escreva um programa que utilize uma função para solicitar os dados de um elemento da
matriz e outra para listar todos os dados*/
#include<stdio.h>

struct restaurante{
    
    char nome[25], endereco[50], tipoComida[25];
    float precoMedio;
};

struct restaurante restaurantes[2][2];

void matrizInput(int lin, int col){

            
    printf("Nome do restaurante: ");
    fgets(restaurantes[lin][col].nome, 25, stdin);
    fflush(stdin);
    printf("Endereco do restaurante: ");
    fgets(restaurantes[lin][col].endereco, 50, stdin);
    fflush(stdin);
    printf("Tipo de comida do restaurante: ");
    fgets(restaurantes[lin][col].tipoComida, 25, stdin);
    fflush(stdin);
    printf("Nome do restaurante: ");
    scanf("%f", &restaurantes[lin][col].precoMedio);
    fflush(stdin);

  
}

void imprime(){//funcao que imprime resultados

    for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){

            printf("Nome: %s\n", restaurantes[i][j].nome);
            printf("Endereco: %s\n",restaurantes[i][j].endereco);
            printf("Tipo de comida: %s\n", restaurantes[i][j].tipoComida);
            printf("Endereco: %.2f\n",restaurantes[i][j].precoMedio);
            printf("\n");
        }
    }

}

int main(void){

    int lin, col, opt;
    char loopOpt;

    do{
        printf("[1] Inserir dados na matriz\n[2] Mostrar dados inseridos\n");
        scanf("%d", &opt);
        fflush(stdin);

        switch (opt){

        case 1://case para edicao de dados

            printf("Informe a linha que deseja editar na matriz: ");
            scanf("%d", &lin);
            printf("Informe a coluna: ");
            scanf("%d", &col);
            fflush(stdin);

            matrizInput(lin, col);

            break;

        case 2://case que chama a funcao que imprime resultados

            imprime();

            break;
        
        default:
            break;
        }

        printf("Deseja continuar?: ");
        scanf("%c", &loopOpt);
        fflush(stdin);

    }while(loopOpt != 'n');


        



    return 0;
}