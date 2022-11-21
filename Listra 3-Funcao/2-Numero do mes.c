/*Faça uma função que receba um número inteiro entre 1 a 12 e imprima em tela o mês e a
sua quantidade de dias de acordo com o número digitado pelo usuário. Exemplo:
Entrada = 4. Saída = abril.*/
#include<stdio.h>
//declaracao de funcao 
int MostraMes(int mes){
    switch(mes){
        case 1:
        printf("\nJaneiro\n");
        printf("Tem 29 dias.\n");
        break;

            case 2:
            printf("\nFevereiro\n");
            printf("Tem 28 dias.\n");
            break;

                case 3:
                printf("\nMarco\n");
                printf("Tem 31 dias.\n");
                break;

                    case 4:
                    printf("\nAbril\n");
                    printf("Tem 30 dias.\n");
                    break;

                        case 5:
                        printf("\nMaio\n");
                        printf("Tem 31 dias.\n");
                        break;

                            case 6:
                            printf("\nJunho\n");
                            printf("Tem 30 dias.\n");
                            break;

                                case 7:
                                printf("\nJulho\n");
                                printf("Tem 30 dias.\n");
                                break;

                                    case 8:
                                    printf("\nAgosto\n");
                                    printf("Tem 31 dias.\n");
                                    break;

                                        case 9:
                                        printf("\nSetembro\n");
                                        printf("Tem 30 dias.\n");
                                        break;

                                            case 10:
                                            printf("\nOutubro\n");
                                            printf("Tem 29 dias.\n");
                                            break;

                                                case 11:
                                                printf("\nNovembro\n");
                                                printf("Tem 30 dias.\n");
                                                break;

                                                    case 12:
                                                    printf("\nDezembro\n");
                                                    printf("Tem 31 dias.\n");
                                                    break;
    }
}

int main(){
    int mes;
    printf("Digite o numero do mes:");
    scanf("%d",&mes);
    MostraMes(mes);

}